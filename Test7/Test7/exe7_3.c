#define _CRT_SECURE_NO_WARNINGS 1
////3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include<stdio.h>

int DigitSum(int n)       //递归函数DigitSum(n)
{
	if (n < 10)
	{
		return n;
	}
	return n % 10 + DigitSum(n / 10);
}
	
int main()
{
	int n = 0;
	printf("输入一个非负整数:\n");
	scanf("%d",&n);
	
	DigitSum(n);
	printf("数字之和:%d\n", DigitSum(n));    //输出自定义函数返回值
	return 0;
}