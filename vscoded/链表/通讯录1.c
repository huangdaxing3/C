# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <malloc.h>

typedef struct date{
    int year,month,day;
}Date;

typedef struct record{
    char name[10];
    char sex[3];
    Date birthday;
    char phone[12];
    struct record * next;
}Record;

void main_deal(Record ** head);
int input(Record ** head);
void display(Record * head);
void free_linklist(Record * head);

void main()
{
    Record * head = NULL;

    main_deal(&head);
    free_linklist(head);

    head = NULL;
}

void free_linklist(Record * head){
    Record *p,*q;

    q = head;
    while(q != NULL){
        p = q;
        q = q->next; 
        free(p);
    }
    printf("释放完毕!按任意键返回.\n");
//  getch();
}

void main_deal(Record ** head){
    int select=1;

    while(1)
    {
        printf("************************\n");
        printf("**     通信录管理     **\n");
        printf("**     ========       **\n");
        printf("**     1.录入         **\n");
        printf("**     2.修改         **\n");
        printf("**     3.删除         **\n");
        printf("**     4.查询         **\n");
        printf("**     5.打印         **\n");
        printf("**     0.退出         **\n");
        printf("************************\n");
        printf("请选择：");
        printf("\n");
        scanf("%d",&select);
        switch(select)
        {
            case 1:
                input(head);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                display(*head);
                break;
            case 0:
                break;
            default:
                printf("选择错误!按任意键继续.\n");
//              getch();
                break;
        }
    }
}

int input(Record ** head){
    int myes;
    Record rcd;
    Record *p,*q;

    printf("输入姓名(为空将返回)：");
//  scanf("%s",rcd.name);
    gets(rcd.name);
    gets(rcd.name);
    if(strlen(rcd.name) == 0) return 1;
    
    printf("  性别：");
    scanf("%s",rcd.sex);
    printf("出生日期：");
    scanf("%d.%d.%d",&rcd.birthday.year,
                     &rcd.birthday.month,
                     &rcd.birthday.day);
    printf("电话号码：");
    scanf("%s",rcd.phone);

    printf("请选择：1--保存，2--放弃？");
    scanf("%d",&myes);
    if(myes != 1) return 1;

    p = (Record *)malloc(sizeof(Record));
    if(p == NULL) {
        printf("申请空间出错!按任意键返回.\n");
//      getch();
        return -1;
    }
    strcpy(p->name,rcd.name);
    strcpy(p->sex,rcd.sex);
    strcpy(p->phone,rcd.phone);
    p->birthday = rcd.birthday;
    p->next = NULL;

    q = *head;
    if(q == NULL){
        *head = p;
    }
    else{
        while(q->next != NULL) q = q->next;
        q->next = p;
    }
    printf("保存完毕!按任意键返回.\n");
//  getch();
    return 1;
}

void display(Record * head){
    Record * p;

    p = head;
    if(p == NULL){
        printf("目前尚未录入数据!按任意键返回.\n");
//      getch();
        return;
    }
    while(p != NULL){
        printf("姓名：%s\n",p->name);
        printf("性别：%s\n",p->sex);
        printf("出生日期：%d.%d.%d\n",
                                p->birthday.year,
                                p->birthday.month,
                                p->birthday.day);
        printf("电话号码：%s\n",p->phone);
        printf("按任意键继续.\n\n");
//      getch();
        p = p->next;
    }
    printf("显示完毕!按任意键返回.\n\n");
    return;
}