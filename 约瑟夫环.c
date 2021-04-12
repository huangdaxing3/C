/*
n 个人围成一圈，从第一个人开始报数,数到 m 的人出列，再由下一个人重新从 1 开始报数，数到 m 的人再出圈，依次类推，直到所有的人都出圈，请输出依次出圈人的编号。

注意：本题和《深入浅出-基础篇》上例题的表述稍有不同。书上表述是给出淘汰 n-1 名小朋友，而该题是全部出圈。

输入格式
输入两个整数 n,m

输出格式
输出一行 n 个整数，按顺序输出每个出圈人的编号。

输入输出样例
输入 #1复制
10 3
输出 #1复制
3 6 9 2 7 1 8 5 10 4
说明/提示
1 \le m, n \le 1001≤m,n≤100
*/

# include <stdio.h>
# include <malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}list,*plist;

void chu(int n,int m)
{
    plist p = NULL;
    plist q = NULL;
    plist l = NULL;
    int i;
    for(i=1;i<=n;i++) {
        p = (plist)malloc(sizeof(list));
        if(p == NULL) {
            printf("分配失败!\n");
            exit(-1);
        }
        p->data = i;
        if(l == NULL) {
            l = p;
        }
        else
            q->next = p;
        q = p;
    }
    p->next = l;
    p = l;

    int count = 0;
    while(1) {
        for(i=1;i<m;i++) {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        printf("%d位出圈\n",p->data);
        count++;
        free(p);
        if(count == n)
            break;
        p = q->next;
    }
}

int main()
{
    int m,n;  
    printf("请输入总人数：");  
    scanf("%d",&n);  
    printf("请输入间隔人数：");  
    scanf("%d",&m);  
    chu(n, m);  
}

/*#include<stdio.h>
struct Peo
{
	int ID;
	Peo *next , *prior;
	Peo(){ next = prior = NULL; }
	
}n[100];
void _Cut(Peo *now)//定义了一个节点now
{
    now = now->prior;
    now->next = now->next->next;
    now = now->next;
    now->prior = now->prior->prior;	
 } 
int main()
{
	int a,b,c=1;//c是个计数的 
	Peo *now = n;            //指向目前报数的人的指针
	scanf("%d %d",&a,&b);
	for(int i=1;i<a-1;i++){
		n[i].prior=n + i - 1;
		n[i].next=n + i + 1;
		n[i].ID=i + 1;
	} 
	n[0].prior=n + a - 1;
	n[0].next=n + 1;
	n[a-1].prior=n + a -2;
	n[a-1].next=n; 
	n[0].ID=1;
	n[a-1].ID=a;
	
	while(a>0){
		if(c==b){
			printf("%d ",n->ID);
			_Cut(n);
			c=1;
			a--;
			now = now->next;
		}
		else
		{
			c++;
			now=now->next;
		}
	}
	return 0;
 }
 */
