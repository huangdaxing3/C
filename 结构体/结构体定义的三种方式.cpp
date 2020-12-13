# include <stdio.h>
//第一种方式  
struct Student
{
	int age;
	float score;
	char sex;
};

//第二种方式
struct Student
{
	int age;
	float score;
	char sex;
} st2;

//第三种方式
struct
{
	int age;
	float score;
	char sex;
} st3;
