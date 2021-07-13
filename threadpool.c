# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h>
# include <errno.h>
# include <sys/types.h>
# include <fcntl.h>
# include <string.h>
# include <time.h>
# include <signal.h>
# include <sys/wait.h>

void *thread_routine();
void create(int num);
void add(void(*routine)(void *), void* arg);
void destroy();
void func1();

typedef void Func(void*);

typedef struct th_queue {
    void*             arg;
    Func*             routine;            
    struct th_queue  *next;
} thpool_queue;

typedef struct threadpool {    //线程池
    int               flag;             // 0不销毁　　1销毁
    int               num;              // 线程池大小
    pthread_t         *ID;
    pthread_cond_t    cond;             // 条件变量
    pthread_mutex_t   mutex;            // 互斥锁
    thpool_queue     *head;             // 指向队列指针
} thpool;

static thpool * pool = NULL;

int main(int argc,char *argv[])
{
    system("clear");
    int i;

    create(5);                             //线程池里创建10个线程
    for (i = 0; i < 20; i++) {
        add(&func1,NULL);
    }

    sleep(5);
    destroy();
}

void *thread() {                       //线程函数
    thpool_queue *run;

    while (1) {
        pthread_mutex_lock(&pool->mutex);              
        while((pool->head == NULL) && ( pool->flag == 0)) {    //此时没有任务且不销毁线程池
            printf("thread %u is ready!\n",pthread_self());
            pthread_cond_wait(&pool->cond,&pool->mutex);       //抢到锁的线程等待，其他线程在锁外边阻塞(和一个互斥锁配合，以防止多个线程同时请求)
            printf("thread %u is weaken!\n",pthread_self());
        }
        if(pool->flag != 0) {
            pthread_mutex_unlock(&pool->mutex);
            pthread_exit(0);
        }
        run = pool->head;                      //不销毁，将任务添加到队列
        pool->head = pool->head->next;          //让任务指针指向下一个
        pthread_mutex_unlock(&pool->mutex);
        run->routine(run->arg);
        free(run);
    }
}

void create(int num) {                  //线程创建函数
    int i;   
    pool = (thpool *)malloc(sizeof(thpool));    
    if( !pool )
        perror("malloc error!");
    pool->flag = 0;
    pool->num = num;                
    pool->ID = (pthread_t*)malloc(num*sizeof(pthread_t));
    pool->head = NULL;
    pthread_mutex_init(&pool->mutex,NULL);
    pthread_cond_init(&pool->cond,NULL);
    for (i = 0;i < num;i++) {
        pthread_create(&pool->ID[i],NULL,thread,NULL);  //创建线程
    }
}

void add(void(*func)(void *), void* arg) {
    thpool_queue  *run,*task;

    run = (thpool_queue*)malloc(sizeof(thpool_queue));
    run->routine = func;
    run->arg = arg;
    run->next = NULL;
    pthread_mutex_lock(&pool->mutex);               //对队列操作保证只有一个线程
    task = pool->head;
    if( !task ) {
        pool->head = run;                          //任务是第一个任务
    } else {
        while (task->next != NULL) {               //不是第一个添加到最后
            task = task->next;
        }
        task->next = run;
    }
    pthread_cond_signal(&pool->cond);
    pthread_mutex_unlock(&pool->mutex); 
}

void destroy() {                           //销毁线程池
    printf("The threadpool is being destroyed!\n");
    int i;
    thpool_queue *task;  
    if(pool->flag != 0)                        //先判断是否已经销毁
        return;

    pool->flag = 1;                            //1，则销毁
    pthread_mutex_lock(&pool->mutex); 
    pthread_cond_broadcast(&pool->cond);       //唤醒全部线程
    pthread_mutex_unlock(&pool->mutex);   
    for (i = 0; i < pool->num; i++) {
        pthread_join(pool->ID[i],NULL);     //等待所有线程都结束
    }
    free(pool->ID);                      //将所有线程ID释放

    while (pool->head) {
        task = pool->head;
        pool->head = pool->head->next;
        free(task);                              //释放每一个任务
    }

    pthread_mutex_destroy(&pool->mutex);    //销毁锁
    pthread_cond_destroy(&pool->cond);      //销毁条件变量
    free(pool);                                  //销毁指向线程池的指针
    sleep(5);
    puts("Destroyed!\n");
}

void func1() {
    printf("thread %u is running\n",pthread_self());
    sleep(3);                                     
}

