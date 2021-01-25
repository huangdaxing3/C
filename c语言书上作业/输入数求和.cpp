# include <stdio.h>
int main()
{
	float x;
	float sum=0;
	scanf("%f",&x);
	while(x>0)
	{
	sum=sum+x;
	scanf("%f",&x);
	}
	printf("%6.2f\n",sum);
	return 0;
}
