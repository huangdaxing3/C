# include <stdio.h>
int main()
{
    int i,n,m;
    double sum1=0.0,sum2=0.0,sum;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        sum1+=i*i;
        sum2+=1.0/i;
    }
    printf("sum = %.6lf\n",sum1+sum2);
}
