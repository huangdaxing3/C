# include <stdio.h>
int main()
{
	int i;
	long int f,f1=1,f2=1;
	printf("%10ld\n%10ld\n",f1,f2);
	for(i=3;i<=30;i++)
	{
		f=f1+f2;
		printf("%10ld\n",f);
		f1=f2;
		f2=f;
    }
	return 0;
}
