#define _CRT_SECURE_NO_WARNINGS 1
//4. 编写一个函数 reverse_string(char * string)（递归实现） 
//   实现：将参数字符串中的字符反向排列。
//   要求：不能使用C函数库中的字符串操作函数。
#include<stdio.h>

void reverse_str(char * str)
{
	if (*str != '\0')
	{
		reverse_str(str+1);
		printf("%c", *str);
	}
	
}

int main()
{
	//char str[100];
	char str[] = "abcdef";
	//gets(str);
	printf("%s\n",str);
	reverse_str(str);
	printf("\n");

	return 0;
}