# include <stdio.h>
int main()
{
	int coin1,coin2,coin5,count=0;
	for(coin5=0;coin5<=20;coin5++)
     	for(coin2=0;coin2<=50;coin2++)
        	for(coin1=0;coin1<=100;coin1++)
	{
		if((coin1+coin2+coin5==50)&&(coin1+coin2*2+coin5*5==100))
		{
			count++;
			printf("\n 方案[%d]为:%d个5分硬币,%d个2分硬币,%d个1分硬币",count,coin1,coin2,coin5);
		}
	}
	return 0;
}
