# include <stdio.h>
int main()
{
	int i=0;
	int n;
	for(n=100;n<=150;n++)
	{
		//if(i%4!=0)
		//printf("%d",i);
		if(n%4==0)
		continue;
		printf("%4d",n);
		i++;
		if(i%8==0)
		printf("\n");
	}
	return 0;
}
