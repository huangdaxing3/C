# include <stdio.h>
# include <math.h> 
int main()
{
	int m,k,i,n=0;
	for(m=101;m<=150;m++)
	{
		k=sqrt(m);
		for(i=2;i<=k;i++)
		{
			if(m%i==0)
			break;
		}
		if(i>=k+1)
		{
			printf("%d ",m);
			n=n+1;
			if(n%5==0)
			printf("\n");
		}
	}
}
