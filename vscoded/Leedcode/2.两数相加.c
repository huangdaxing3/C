# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <malloc.h>

typedef struct list{
    int data;
    struct list * pnext;
}node,*plist;

plist create(void){
    int i,len,val;

    plist phead = (plist)malloc(sizeof(node));
    if(NULL == phead){
        printf("分配失败！");
        exit(-1);
    }
    plist ptail = phead;
    ptail->pnext = NULL;

    printf("请输入您想生成的链表节点个数：len = ");
    scanf("%d",&len);

    for(i=0;i<len;i++){
        printf("请输入第%d个节点的值："，i+1);
        scanf("%d",&val);

        if(NULL !=)
    }
}