////给定两个整型变量的值，将两个值的内容进行交换

#include<stdio.h>
int main()
{
	int i = 10;
	int j = 20;
	int x = 0;
	printf("i=%d\n", i);
	printf("j=%d\n", j);
	x = i;
	i = j;
	j = x;
	printf("i=%d\n", i);
	printf("j=%d\n", j);
	return 0;
}