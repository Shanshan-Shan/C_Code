#define _CRT_SECURE_NO_WARNINGS 1
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//   ʵ�֣��������ַ����е��ַ��������С�
//   Ҫ�󣺲���ʹ��C�������е��ַ�������������
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