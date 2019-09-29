//将三个数按从大到小输出
#include <stdio.h>
int main()
{
	int a = 8;
	int b = 3;
	int c = 6;
	int tmp = 0;
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("从大到小依次是：%d %d %d\n",a,b,c);
	return 0;
}