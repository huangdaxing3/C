# include <stdio.h>
# include <malloc.h>

typedef struct list {
    int data;
    struct list * next;
}node,*pnode;

pnode initlist(){
    pnode head;
    head = (pnode)malloc(sizeof(node));
    head->next = NULL;
    return head;
}

void weicha(pnode head){
    pnode r,s;
    int data;
    r = head;
    printf("请输入学生学号：\n");

    while(1){
        scanf("%d",data);
        if(data==0)
            break;
        s = (pnode)malloc(sizeof(node));
        s->data = data;
        r->next = s;
        r = s; 
    }
}

void toucha(pnode head){
    pnode s;
    int data;
    printf("请输入学生学号：\n");

    while(1){
        scanf("%d",&data);
        if(data==0)
            break;
        s = (pnode)malloc(sizeof(node));
        s->data = data;
        s->next = head->next;
        head->next = s;
    }
}

void output(pnode head){
    pnode p;
    p = head->next;
    while(p){
        printf("学号：%d\n",p->data);
        p = p->next;
    }
}

void main()
{
    pnode p,head;
    p = initlist();
    weicha(p);
    output(p);
}