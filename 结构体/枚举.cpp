# include <stdio.h>

//ֻ������һ���������ͣ���û�ж�����������������͵������� enum WeekDay 
enum WeekDay{
	MonDay,TuesDay,WednesDay,ThursDay,FriDay,SaturDay,SunDay
};

int main()
{
//	int day;   // day�����int�Ͳ����� 
	enum WeekDay day = WednesDay;
	printf("%d\n",day); 
	return 0;
}
