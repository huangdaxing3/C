# include <stdio.h>
int main()
{
	int i,x,r;
	printf("请输入一个数:");
	scanf("%d",&x);
	for(i=2;i<=(x-1);i++)
	{
		r=x%i;
		if(r==0)
		{
			printf("%d不是素数",x); 
			break;
		}
		printf("%d是素数",x);
		break;
	}
	if(i>=x)
	printf("%d是素数",x); 
	
	return 0;
}

