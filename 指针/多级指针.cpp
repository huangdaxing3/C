# include <stdio.h>

int main(void)
{
	int i = 10;
	int * p = &i;
	int ** q = &p;
	int *** r = &q;

	//r = &p;  //因为r是int***类型，r只能存放int**类型变量地址
	printf("i = %d\n", ***r);

	return 0;
}