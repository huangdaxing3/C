# include <stdio.h>
int main()
{
	int i,x,r;
	printf("������һ����:");
	scanf("%d",&x);
	for(i=2;i<=(x-1);i++)
	{
		r=x%i;
		if(r==0)
		{
			printf("%d��������",x); 
			break;
		}
		printf("%d������",x);
		break;
	}
	if(i>=x)
	printf("%d������",x); 
	
	return 0;
}

