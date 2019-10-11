#define _CRT_SECURE_NO_WARNINGS 1
//5.递归和非递归分别实现strlen 
//6.递归和非递归分别实现求n的阶乘
//7.递归方式实现打印一个整数的每一位
#include<stdio.h>

//递归实现strlen 
//int my_strlen(char *str)
//{
//	int count = 0;
//	if (*str != '\0') //注意'\0'
//	{
//		count++;
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	printf("%s\n", str);
//	my_strlen(str);
//	printf("%d\n",my_strlen(str));
//	return 0;
//}

//非递归实现strlen
int my_strlen(char*str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int main()
{
	char str[] = "abcdef";
	printf("%s\n", str);
	my_strlen(str);
	printf("%d\n", my_strlen(str));
	return 0;
}