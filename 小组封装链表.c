# include <stdio.h>
# include <malloc.h>

typedef struct node{
    int val;
    struct node* next;
}list,*plist;

plist InitList();
void CreatByRear(plist head); //尾插法
void CreatByHead(plist head);　//头插法
void OutPut(plist head);
void delete(plist head,int pos);　//删除单结点
void delete_key(plist head,int key);　//删除值为ｋｅｙ结点
void change(plist head,int pos,int val);　//修改结点内容
plist Search(plist head,int num);　// 查找
void search_k(plist head,int key);　// 查找值为ｋｅｙ结点

int main(){
    plist head;
    head = InitList();
    CreatByRear(head);
    OutPut(head);
    return 0;
}

plist InitList(){
    plist head;
    head = (plist)malloc(sizeof(list));
    head->next = NULL;
    return head;
}

//尾插法
void CreatByRear(plist head){
    plist r,s;
    int num;
    r = head;
    while(1){
        scanf("%d",&num);
        if(num == 0)
            break;
        s = (plist)malloc(sizeof(list));
        s->val = num;
        r->next = s;
        r = s;
    }
    r->next = NULL;
}

//头插法
void CreatByHead(plist head){
    plist s;
    int num;
    while(1){
        scanf("%d",&num);
        if(num == 0)
            break;
        s = (plist)malloc(sizeof(list));
        s->val = num;
        s->next = head->next;
        head->next = s;
    }
}

//输出
void OutPut(plist head){
    plist p;
    p = head->next;
    printf("输出");
    while(p){
        printf("%d\n",p->val);
        p = p->next;
    }
}

//删除第i个节点
void delete(plist head,int pos){
    plist p = head,q;
    int j = 0;
    printf("删除第％d个节点",pos);
    while(j<pos-1 && p){
        p=p->next;
        j++;
    }
    if(p==NULL || p->next == NULL)
        printf("error!");
    else{
        q = p->next;
        p->next = q->next;
        free(q);
    }
}

//删除所有值为key的节点
void delete_key(plist head,int key){
    plist s,p;
    s = head;
    while(s != NULL){
        if(s->next->val == key){
            p = s->next;
            s->next = s->next->next;
            free(p);
        }
        s = s->next;
    }
    return head;
}

//修改节点信息函数
void change(plist head,int pos,int val){
    plist p = head,q;
    int j = 0;
    printf("删除第％d个节点",pos);
    while(j<pos-1 && p){
        p=p->next;
        j++;
    }
    if(p==NULL || p->next == NULL)
        printf("error!");
    else{
        q = p->next;
        p->next = q->next;
        free(q);
    }
    int i=0;
    plist k = head;
    while(NULL!=k && i<pos-1){
        k = k->next;
        i++;
    }
    plist pNew = (plist)malloc(sizeof(list));
    if(NULL == pNew){
        printf("动态分配内存失败!\n");
        exit(-1);
    }
    pNew->val = val;
    plist l = k->next;
    k->next = pNew;
    pNew->next = l;
}


//查找第i个节点
plist Search(plist head,int num){
    plist p = head->next;
    while(p){
        if(p->val != num)
            p = p->next;
        else
            break;
    }
    if(p==NULL)
        printf("没有找到!");
    return p;
}

//查找值为key的节点
void search_k(plist head,int key){
    int h = 0;
    plist p = head->next;
    while (p != NULL){
        h++;
        if (key == p->val)
        printf("找到值为%d的位置，位于%d位。\n",key,h);
        p = p->next;
    }
}


