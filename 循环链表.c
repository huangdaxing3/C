#include <stdio.h>
# include <malloc.h>

 /* 定义数据结构 */
typedef struct DouLinkNode {
    int data ;               //链表中存放的数据，可以自定义数据结构 
    struct DouLinkNode *pre;
    struct DouLinkNode *next;
}list,*plist;

/* 双向链表创建 */ 
plist create(int n)
{   
    int x;
    plist head = (plist)malloc(sizeof(list));
    plist p,s;
    p = head;
    p->pre = NULL;
    while(n) {
        s = (plist)malloc(sizeof(list));
        printf("input data of the node:data=");
        scanf("%d",&x);
        s->data = x;
        p->next = s;
        s->pre = p;
        p = s;
        n--;
    }
    s->next = NULL;
    return head;
}

 /* 双向链表打印 */
void display(plist head)
{
    plist p = head->next;
    while(p->next) {
        printf("%d <---> ",p->data);
        p = p->next;
    }
    printf("%d \n",p->data);
}

int main()
{
    plist head,head1;
    int n;
    int data;
    printf("input n:");
    scanf("%d",&n);
    head = create(n);
    display(head);
}