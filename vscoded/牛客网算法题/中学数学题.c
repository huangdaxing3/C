#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,p;
    for(int i = 0;i < t;i++){
      scanf("%d%d",&n,&p);
      int count = 0;
      for(int j = p;j <= n;j += p){ //找出所有p的倍数：1p,2p,3p...
          int k = j;
        while(k % p == 0){ //计算p的倍数中包含p个数，即要除以几次才能余数不为0，即0的个数
            count++;
            k /= p;
        }
      }
        printf("%d\n",count);
    }
    return 0;
}
/*
题目描述
这是一道很简单的中学数学题：

给定数n，求n!的p进制下有多少个后导零。非常简单。
为了简化问题，p保证为素数。
输入描述:
第一行给定一个数t，表示有t组输入

接下来t行，每行给定两个数n,p；意义如题所示；
输入范围：(t<=1000) (1<=n<=1000000 ） (2<=p<=1000000)
输出描述:
对于每一组输入，输出单独的一行表示答案。
示例1
输入
复制
2
2 2
3 2
输出
复制
1
1
https://uploadfiles.nowcoder.com/compress/mw1000/images/20201207/321551252_1607314343773_FB5C81ED3A220004B71069645F112867
*/