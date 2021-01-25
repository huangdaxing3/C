# include <stdio.h>
int main()
{
	int i,m,flag;
	for(m=100;m<=200;m++)
	{
		flag=1;
		for(i=2;i<m;i++)
		if(m%i==0)
		{
			flag=0;
			i=m;
    	}
		if(flag==1)
		printf("%d是素数\n",m);
		else
		printf("%d不是素数\n",m);
	}
}
