#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
//定义结构体 
typedef struct node{
	int data;
	struct node *next;
}Node,*LinkList;

//创建链表 
LinkList CreatByRear(){
	Node *r,*s,*head;
//	head=(Node*)malloc(sizeof(Node));
//	head->next =NULL;
	head=NULL; 
	int data;
//	r=head;
	while(1){
		scanf("%d",&data);
		if(data==0) break;
		s=(Node*)malloc(sizeof(Node));
		s->data=data;
		if(head==NULL){
			head=s;
			r=head;
		}
		else{
			r->next=s;
			r=s;	
		}
	}
	r->next=NULL;
	return head;
}
//打印链表 
void OutPut(LinkList head){
	Node *p;
//	p=head->next ;
	p=head;
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

//有头结点
/*
LinkList Reverse(LinkList head){
	Node *p,*q;
	p=head->next;         //p指向第一个数据结点 
	head->next=NULL;      //将原链表置为空表
	while(p){
		q=p;
		p=p->next;
		q->next=head->next;
		head->next=q;
	} 
	return head; 
} 
*/

// 无头结点
 LinkList Reverse(LinkList head){
 	LinkList p1=head;
 	LinkList p2=head->next;
 	LinkList p3=NULL;
 	while(p2!=NULL){
 		p3=p2->next;
 		p2->next=p1;
 		p1=p2;
 		p2=p3;
	 }
	 head->next=NULL;
	 head=p1;
	 return head;
 }

//递归法 
/*
LinkList Reverse(LinkList head){
	if(head->next==NULL){
		return head; 
	}
	Node *newhead=Reverse(head->next);
	head->next->next=head;
	head->next=NULL;
	return newhead;
} 
*/ 
 
int main(){
	LinkList ha;
	ha=CreatByRear();
	printf("原链表为；\n");
	OutPut(ha);
	ha=Reverse(ha);
	printf("现链表为；\n"); 
	OutPut(ha);
}
