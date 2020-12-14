#include <stdio.h>
int n,q,a[200],x,y,opr,cnt;
 
int main()
{
    scanf("%d%d",&n,&q);
    for (int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    while (q--)
    {
        scanf("%d",&opr);
        if (opr==1)
        {
            scanf("%d",&x);
            for (int i=x; i<n; i++)
                a[i]=a[i+1];
             
            n--;
            for (int i=1; i<=n; i++)
                printf("%d ",a[i]);
            printf("\n");
            continue;
        }
        else if (opr==2)
        {
            scanf("%d%d",&x,&y);
            for (int i=n; i>=x; i--)
                a[i+1]=a[i];
            a[x]=y;
             
            n++;
            for (int i=1; i<=n; i++)
                printf("%d ",a[i]);
            printf("\n");
            continue;
        }
        else if (opr==3)
        {
            scanf("%d",&x);
            for (cnt=0; x+cnt<=n && a[x+cnt]==a[x]; cnt++)
                continue;
             
            a[x]=cnt*a[x];
             
            cnt--;
             
            for (int i=x+1,j=n-cnt; i<=j; i++)
                a[i]=a[i+cnt];
             
            n-=cnt;
            for (int i=1; i<=n; i++)
                printf("%d ",a[i]);
            printf("\n");
            continue;
        }
    }
    return 0;
}
/*
链接：https://ac.nowcoder.com/acm/contest/9692/K
来源：牛客网

题目描述

给你一个长度为n的数组，现在定义以下三种操作。
"1 x"表示删除数组的第x(1<=x<=m)个元素，第x+1到第m个元素全部往前移一位。m为操作前数组的元素个数。
"2 x y"表示在数组的第x(1<=x<=m)位插入元素y，原数组的第x个元素到第m个元素全部往后移一位。m为操作前数组的元素个数。

"3 x"表示从数组第x(1<=x<=m)个元素开始与 第x位元素的值相等且连续的一整段数合并到数组的第x位，剩余元素依次前移。m为操作前数组的元素个数。
输入描述:

第一行读入一个n和q(1<=n<=100，1<=q<=100)，分别表示初始数组的长度和操作次数。

第二行读入n个整数，表示初始数组的元素。每个元素的大小不超过100。

第三行到第q+2行，每行按格式读入一种操作。

输出描述:

对于每次操作，输出完成操作后的数组。

示例1
输入
复制

8 3
1 2 2 2 3 5 4 2
1 5
2 4 2
3 3

输出
复制

1 2 2 2 5 4 2
1 2 2 2 2 5 4 2
1 2 6 5 4 2
*/