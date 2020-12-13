# include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {80,66.6,'F'};  //初始化  定义的同时赋初值
	struct Student * pst = &st;  //&st不能改成st
	 
	pst->age = 88;  //第二种方式 更常用 
	st.score = 66.6f;  //第一种方式   66.6在C语言中默认是double型，如果希望一个实数是float类型，则必须在末尾加f或F 
	
	printf("%d %f\n",st.age, pst->score);

	return 0;
}
