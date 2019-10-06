//#define _CRT_SECURE_NO_WARNINGS 1
//
////2.编写一个函数实现n^k，使用递归实现 
//#include<stdio.h>
//
//int power(int n, int k)  //非递归
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 0; i < k; i++)
//	{
//		ret *= n;
//	}
//	return ret;
//}

//int power(int n, int k)  //递归
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n* power(n, k - 1);
//}
 
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入n和k,计算n^k:\n");
//	scanf("%d %d",&n,&k);               //scanf里面不能有\n,还要注意&；
//	printf("%d^%d=%d\n", n,k,power(n, k));
//	return 0;
//}