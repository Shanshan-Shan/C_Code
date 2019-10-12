#define _CRT_SECURE_NO_WARNINGS 1
//递归方式实现打印一个整数的每一位
#include<stdio.h>

void print(int n)
{
	//int i = n;
	if (n < 10)
	{
		printf("%d\n",n);
	}
	else
	{
			//printf("%d\n",n%10);  //交换这两句的顺序可以顺序输出每一位
			print(n / 10);          //交换这两句的顺序可以顺序输出每一位
			printf("%d\n", n % 10); //交换这两句的顺序可以顺序输出每一位
	}
}

int main()
{
	int n = 0;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	print(n);

	return 0;
}