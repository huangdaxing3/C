# include <stdio.h>
int main()
{
	int t,num,a,k;
	scanf("%d",&num);
    t=0;
    k=num;
	while(num>0)
	{
		a=num%10; 
		num=num/10;
		t=t*10+a;		 
    }
	if(t==k)  
	printf("%d�ǻ�����\n",k);
	else
	printf("%d���ǻ�����\n",k);
	return 0;
} 
