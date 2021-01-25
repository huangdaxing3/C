# include <stdio.h>
int main()
{
	int m,i,s;
	for(m=2;m<=500;m++)
	{
		s=0;
		for(i=1;i<=m/2;i++)
		{
			if(m%i==0)
			s=s+i;
		}
		if(m==s)
		printf("%d\n",m);			
	}
} 
