# include <stdio.h>
int main()
{
	int i, m, t;
	scanf("%d",&m);
	for(i=2;i<=(m-1);i++)
	{
		t=m%i;
		if(t=!0)
		{
			printf("yes\n");
			break;
		}
		else
		printf("no\n");
	}
}
