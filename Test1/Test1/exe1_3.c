//判断1000年--2000年之间的闰年

#include<stdio.h>
int i = 1000;
int main()
{
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}