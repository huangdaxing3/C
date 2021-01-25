# include <stdio.h>
int main()
{
	int i, sum=0;
	i=1;
	do
	{
		sum=sum+i;
		i++;
	} while (i<=200);
	
	printf("%d\n",sum);
	return 0;
}
