#define _CRT_SECURE_NO_WARNINGS 1
//4.��дһ�����򣬿���һֱ���ռ����ַ��� �����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
#include<stdio.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			putchar(ch - 32);       //ASCII���
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0'&&ch <= '9')
		{
			;
		}
		else
			putchar(ch);
	}
	return 0;
}