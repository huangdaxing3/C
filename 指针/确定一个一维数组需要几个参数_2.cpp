/*
    2020��10��30��19:01:06
	һ��Ҫ���� 10�е�pArr[3] �� 17�� 19�е�a[3] ��ͬһ������
*/

# include <stdio.h>

void f(int * pArr, int len)
{
	pArr[3] = 88;
}

int main(void)
{
	int a[6]={1,2,3,4,5,6};

	printf("%d\n", a[3]);  // 4   17��
	f(a, 6);
	printf("%d\n", a[3]);  // 88   19��

	return 0;
}