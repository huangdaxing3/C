# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5];
	int len;
	int * pArr;
	int i;

//��̬����һά����	
	printf("��������Ҫ��ŵ�Ԫ�ظ�����"); 
	scanf("%d",&len);
	pArr = (int *)malloc(4*len);  //  ���ж�̬�Ĺ�����һ��һά���� ,��һά����ĳ�����len���� �������������pArr
	                              //  �������ÿ��Ԫ����int���� 
	                              //  ������ int pArr[len] 
//��һά������в���    �磺�Զ�̬һά������и�ֵ 
	for(i=0;i<len;i++)
	    scanf("%d",&pArr[i]);

//��һά����������	    
	for(i=0;i<len;i++)
	    printf("%d\n",pArr[i]); 
	    
	free(pArr);  //�ͷŵ���̬��������� 

	return 0;
}
