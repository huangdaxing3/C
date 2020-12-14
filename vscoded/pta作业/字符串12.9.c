/*
输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
定义一个指针数组将下面的星期信息组织起来，输入一个字符串，在表中查找，若存在，输出该字符串在表中的序号，否则输出-1。
Sunday Monday Tuesday Wednesday Thursday Friday Saturday
输入输出示例：括号内为说明，无需输入输出
输入样例 (repeat=3) :
3
Tuesday
Wednesday
year
输出样例:
3
4
-1

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],*b[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{                       
        scanf("%s",a);
        for(j=0;j<7;j++)
		{                  
            if(!strcmp(a,b[j]))
			{            
                printf("%d\n",j+1);       
                break;
            }
        }
        if(j>=7)
		{                             
            printf("-1\n");
        }
    }
}
