# include <stdio.h>
typedef struct student{
    char num[6];
    char name[11];
    float score;
}stu;

int main()
{
    int i,n;
    double ave,sum=0.0;
    scanf("%d",&n);
    stu a[n];
    for(i=0;i<n;i++)
        scanf("%s%s%f",a[i].num,a[i].name,&a[i].score);
    for(i=0;i<n;i++)
    	sum+=a[i].score;
    ave = sum/n;
    printf("%.2f\n",ave);
    for(i=0;i<n;i++)
    	if(a[i].score<ave)
    		printf("%s %s\n",a[i].name,a[i].num);
}
