//#define _CRT_SECURE_NO_WARNINGS 1
////1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
////输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//#include<stdio.h>
//
//void print(i)
//{
//	int k = 0;//行
//	int j = 0;//列
//	for (k = 1; k <= i; k++)
//	{
//		for (j = 1; j <= k; j++)
//		{
//			printf("%d*%d=%2d  ",k,j, k*j);//% 2d是将数字按宽度为2，采用右对齐方式输出，如果数据位数不到2位，则左边补空格。
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	printf("请输入行数：\n");
//	scanf("%d",&i);
//	//打印乘法口诀表
//	print(i);
//
//	return 0;
//}