/*
Description
孪生素数是指间隔为 2 的相邻素数，例如最小的孪生素数是3和5,5和7也是孪生数。编写程序，求给定区间[m,n]中的孪生数的数量。
例如[2,10]中的孪生数有(3,5)和(5,7)，则[2,10]中孪生数的数量为2。
Input
正整数m,n, m,n>1
Output
[m,n]中的孪生数的数量
Sample Input 1
2 100
Sample Output 1
8
Sample Input 2
1 9
Sample Output 2
2
*/
#include<stdio.h>
int main()
{
	int m,n,i,j,b,c;
	scanf("%d %d",&m,&n);
	int a[n];
	int k=0;
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			b=i%j;
			if(i==j&&i!=2)
			{
				a[k]=j;
				k++;
			}
			if(b==0)
			break;
		}
	}
	int count=0;
	for(i=0;i<k;i++)
	{
		c=a[i+1]-a[i];
		if(c==2)
		count++;
	}
	printf("%d",count);
}
