# include <stdio.h>

int main(void)
{
	int i = 10;
	int * p = &i;
	int ** q = &p;
	int *** r = &q;

	//r = &p;  //��Ϊr��int***���ͣ�rֻ�ܴ��int**���ͱ�����ַ
	printf("i = %d\n", ***r);

	return 0;
}