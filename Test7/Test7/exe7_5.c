#define _CRT_SECURE_NO_WARNINGS 1
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen 
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include<stdio.h>

//�ݹ�ʵ��strlen 
//int my_strlen(char *str)
//{
//	int count = 0;
//	if (*str != '\0') //ע��'\0'
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

//�ǵݹ�ʵ��strlen
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