# include <stdio.h>
int main()
{
	float mark;
	int i;
	float sum;
	float av;
	int d9,d8,d7,d6,d5;
	sum=0.0;
	d9=d8=d7=d6=d5=0;
	for(i=1;i<=50;i++)
	{
		printf("请输入第%d个同学的成绩：",i);
		scanf("%f",&mark);
		sum+=mark;
		if(mark>=90)
		d9++;
		else if(mark>=80)
		d8++;
		else if(mark>=70)
		d7++;
		else if(mark>=60)
		d6++;
		else
		d5++;
	} 
	av=sum/50;
	printf("C语言平均成绩=%5.2f\n",av);
	printf("90~100分人数=%d,80~90分人数=%d\n",d9,d8);
	printf("70~80分人数=%d,60~70分人数=%d\n",d7,d6);
	printf("60分以下人数=%d\n",d5);
	
}
