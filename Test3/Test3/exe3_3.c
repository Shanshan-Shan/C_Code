// ��һ�� 1�� 100 �����������г��ֶ��ٴ�����9
#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i/10 == 9)//����i-i%10  == 90
		{
			count++;
		}
	}
	printf("9���ֵĴ�����%d\n", count);
	
	return 0;
}