#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//쳲�������:1 1 2 3 5 8 13 21 34 55 89 ......

#include<stdio.h>

//�ݹ�ʵ�����n��쳲�������
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
		
	}
	else
		return fib(n - 1) + fib(n-2);
	
}

int main()
{
	int n = 0;
	printf("�����n��쳲�������,����������n:\n");
	scanf("%d",&n);
	fib(n);           //���õݹ麯��fib;
	printf("%d\n",fib(n));

	return 0;
}
