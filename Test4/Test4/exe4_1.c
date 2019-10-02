//在屏幕上输出菱形图案
#include<stdio.h>
int main()
{
	int i = 0;
	int line = 7;
	//printf("请输入菱形的行数的一半：");
	//scanf("%d", &line);//line=7

	//上半部分；
	for (i = 1; i <= line; i++)
	{
		int j = 0;
		for (j = 1; j <= line-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//下半部分；
	for (i = 1; i <= line-1; i++)  //i<line-1;下半部分行数
	{
		int k = 0;
		for (k = 1; k <= i; k++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2*(line-i)-1; k++)//下半部分每行*号，11(2*6-1,6=line-1)，9，7...//6,5,4(line(7)-i)
		{
			printf("*");
		}
		printf("\n");	
	}

	return 0;
}