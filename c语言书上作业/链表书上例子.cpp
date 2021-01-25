# include <stdio.h>

typedef struct node{
	char name[20];
	int number;
	struct node * next;
}Node,*list;

list initlist(){
	list head;
	head = (list)malloc(sizeof(Node));
	head->next = NULL;
	return head;
}

void weicreate(list head){
	list t,s;
	char name[20];
	int number;
	r = head;
	while(1){
		scanf("%s",name);
		scanf("%d",&number);
		if(number==0)
			break;
		s = (list)malloc(sizeof(Node));
		strcpy(s->name,name);
		s->number = number;
		t->next = s;
		t = s;
	}
	t->next = NULL;
}
