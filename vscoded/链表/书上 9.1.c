# include <stdio.h>
typedef struct node{
    int number;
    char name[20];
    char sex[10];
    int num;
    struct node *next;
}Node,*LinkList;

LinkList initlist(){
    LinkList head;
    head = (LinkList)malloc(sizeof(Node));
    head->next = NULL;
    return head;
}

void creative(LinkList head){
    LinkList r,s;
    char name[20];
    int number;
    r = head;
    while(1)
    {
        scanf("%s",name);
        scanf("%d",&number);
        s = (LinkList)malloc(sizeof(Node));
        strcpy(s->name,name);
        s->number = number;
        s->next = head->next;
        head->next = s;
    }
}

