# include <stdio.h>
int main()
{
	int m,i,flag;
	scanf("%d",&m);
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			flag=0;
			i=m;
		}
	}
		if(flag==0)
		printf("%d��������\n",m);
		if(flag==1)
		printf("%d������\n",m);
	
	return 0;
}
