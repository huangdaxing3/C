# include <stdio.h>
int main()
{
	int m,n;
	char c;
	scanf("%d %c %d",&m,&c,&n);
	
	switch(c)
	{
		case '+':
			printf("%d+%d=%d",m,n,m+n);
			break;
		case '-':
		    printf("%d-%d=%d",m,n,m-n);
		    break;
		case '*':
		    printf("%d*%d=%d",m,n,m*n);
		    break;
		case '/':
		    printf("%d/%d=%d",m,n,m/n);
		    break;
		
	}
	
	return 0;
}
