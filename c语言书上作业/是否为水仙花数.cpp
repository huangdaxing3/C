# include <stdio.h>
int main()
{
	int i,a,b,c;
	
	for(i=100;i<=999;i++)
	{
		a=(i%100)%10;
        b=(i/10)%10;
        c=i/100;
	
		if(c*100+b*10+a == a*a*a+b*b*b+c*c*c)
		printf("%d\n",i);
	}
	
	return 0;
}
