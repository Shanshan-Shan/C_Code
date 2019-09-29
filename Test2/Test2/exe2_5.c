////求两个数的最大公约数。
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	c = a%b;

	while (c)
	{
		a = b;
		b = c;
		c = a%b;
	}
	printf("最大公约数为：%d\n",b);
	return 0;
}