//#define _CRT_SECURE_NO_WARNINGS 1
////1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
////쳲�������:1 1 2 3 5 8 13 21 34 55 89 ......
//
//#include<stdio.h>
////
//////�ݹ�ʵ�����n��쳲�������
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
////	printf("�����n��쳲�������,����������n:\n");
////	scanf("%d",&n);
////	fib(n);           //���õݹ麯��fib;
////	printf("%d\n",fib(n));
////
////	return 0;
////}
//
////�ǵݹ�ʵ�����n��쳲�������
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
//		for (i = 0; i < n - 2; i++)  //ѭ�����޵�ȷ����eg:��������Ҫ����ѭ��
//		{
//			c = a + b;
//			a = b;
//			b = c;                   //���C��a,b��ǰ��һλ
//		}
//		return c;
//	}
//	
//}
//
//int main()
//{
//	int n = 0;
//	printf("�����n��쳲�������,����������n:\n");
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d\n",ret);
//	return 0;
//}