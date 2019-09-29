//不允许创建临时变量，交换两个数的内容

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