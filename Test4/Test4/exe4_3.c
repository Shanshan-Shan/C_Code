#define _CRT_SECURE_NO_WARNINGS 1
//3. 求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>

int main()
{
	int a = 0;
	int sum = 0;
	int i = 0;
	int k = 0;
	printf("请输入一个1~9的数字：");
	scanf("%d",&a);
	for (i = 1; i <= 5; i++)
	{
		k = k * 10 + a;//不能变a的值
		sum = sum + k;
	}
	printf("sum=%d\n",sum);
	return 0;
}