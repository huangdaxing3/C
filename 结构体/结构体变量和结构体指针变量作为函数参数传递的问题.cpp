/*
	2020��11��30��20:39:29
	ͨ��������ɶԽṹ��������������� 
*/ 

# include <stdio.h>
# include <string.h>

struct Student{
	int age;
	char sex;
	char name[100];
};  //�ֺŲ���ʡ 

void InputStudent(struct Student *pstu);
void OutputStudent(struct Student stu);

int main(void)
{
	struct Student st = {20, 'F', "С��"};
	
	InputStudent(&st);  //�Խṹ�����������  ���뷢��st�ĵ�ַ 
//	printf("%d %c %s\n",st.age,st.sex,st.name);
	OutputStudent(st);  // �Խṹ����������  ���Է���st�ĵ�ַ��Ҳ����ֱ�ӷ���st������ 
	
	return 0;
}

void InputStudent(struct Student * pstu)  //pstuֻռ4���ֽ� 
{
	(*pstu).age = 10;
	strcpy(pstu->name, "����");
	pstu->sex = 'F'; 
} 

void OutputStudent(struct Student ss)  
{
	printf("%d %c %s\n",ss.age,ss.sex,ss.name);
}

/* 
// �������޷��޸������� ,���Ա������Ǵ���� 
void InputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name, "����");  //����д��stu.name = "����";
	stu.sex = 'F'; 
} 
*/

