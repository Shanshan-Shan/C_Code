//#define _CRT_SECURE_NO_WARNINGS 1
////6.递归和非递归分别实现求n的阶乘
//#include<stdio.h>

//递归实现求n的阶乘
//int fac(int n)
//{
//	int i = n;
//	while (i != 1)
//	{
//		return n*fac(n-1);
//		i--;
//	}	
//}

//非递归实现求n的阶乘
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		int j = 1;
//		for (i = 1; i <= n; i++)
//		{
//			j=j*i;
//		}
//		return j;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入正整数n:\n");
//	scanf("%d",&n);
//	fac(n);                 //阶乘factorial
//	printf("%d\n", fac(n));
//
//	return 0;
//}