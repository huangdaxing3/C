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
			printf("\n ����[%d]Ϊ:%d��5��Ӳ��,%d��2��Ӳ��,%d��1��Ӳ��",count,coin1,coin2,coin5);
		}
	}
	return 0;
}
