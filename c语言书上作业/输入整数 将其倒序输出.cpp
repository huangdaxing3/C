# include <stdio.h>
int main()
{
	int num, c;
	scanf("%d",&num);
	do
	{
		c=num%10;
		printf("%d",c);
		num=num/10;
	}while(num!=0);
	printf("\n");
	return 0;
}
