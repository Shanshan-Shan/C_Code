//#define _CRT_SECURE_NO_WARNINGS 1
////1.递归和非递归分别实现求第n个斐波那契数
////斐波那契数:1 1 2 3 5 8 13 21 34 55 89 ......
//
//#include<stdio.h>
////
//////递归实现求第n个斐波那契数
////int fib(int n)
////{
////	if (n <= 2)
////	{
////		return 1;
////		
////	}
////	else
////		return fib(n - 1) + fib(n-2);
////	
////}
////
////int main()
////{
////	int n = 0;
////	printf("输出第n个斐波那契数,请输入数字n:\n");
////	scanf("%d",&n);
////	fib(n);           //调用递归函数fib;
////	printf("%d\n",fib(n));
////
////	return 0;
////}
//
////非递归实现求第n个斐波那契数
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 0; i < n - 2; i++)  //循环上限的确定，eg:求第五个需要三次循环
//		{
//			c = a + b;
//			a = b;
//			b = c;                   //求和C。a,b向前移一位
//		}
//		return c;
//	}
//	
//}
//
//int main()
//{
//	int n = 0;
//	printf("输出第n个斐波那契数,请输入数字n:\n");
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d\n",ret);
//	return 0;
//}