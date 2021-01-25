# include <stdio.h>
int main()
{
	int i,j;
	int C[2][3];
	int D[3][2];
	printf("¾ØÕó C:\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&C[i][j]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{ 
			printf("%3d",C[i][j]);
			D[j][i]=C[i][j]; 
		} 
		printf("\n");
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
			printf("%3d",D[j][i]);
		printf("\n");
	}
}
