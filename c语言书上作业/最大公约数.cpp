# include <stdio.h>
int main()
{
	int m, n, r;
	scanf("%d %d",&m,&n);
	r=m%n;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	printf("%d\n",n);
}
