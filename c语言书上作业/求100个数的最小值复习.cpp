# include <stdio.h>
int main()
{
	float x;
	int i;
	float min;
	scanf("%f",&x);
	min=x;
	for(i=2;i<=3;i++)
	{
		scanf("%f",&x);
		if(x<min)
		min=x;
	}
	printf("%f\n",min);
	return 0;
}
