#define _CRT_SECURE_NO_WARNINGS 1
//5.实现一个函数，判断一个数是不是素数。
#include<stdio.h>
#include<math.h>


void prime(int num)
{
	int i = 0;
	int k = 0;
	k = sqrt(num);  //判断素数，看从2到开平方是否有余数为0即可；
	for (i = 2; i <= k; i++)
	{
		if (num%i==0)
		{
			printf("不是素数！\n");
		}
	}
	printf("是素数！\n");

}

int main()
{
	int num = 0;
	printf("请输入一个大于1的整数：\n");
	scanf("%d",&num);
	prime(num);

	return 0;
}