# include <stdio.h>
int main()
{
	int i, n, x, sum;
	i=1; sum=0;
	scanf("%d",&n);
	do
	{ 
		scanf("%d",&x);
		sum=sum+x;
		i++;
	} while (i<=n);
	printf("%d\n",sum);
	return 0;
}
