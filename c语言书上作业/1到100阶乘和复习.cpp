# include <stdio.h>
int main()
{
	int i;
	double x,y;
	x=1;
	y=0;
	for(i=1;i<=100;i++)
	{
		x=x*i;
		y=y+x;
	}
	printf("%lf\n",y);
}
