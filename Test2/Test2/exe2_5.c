////�������������Լ����
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("����������������");
	scanf("%d %d", &a, &b);
	c = a%b;

	while (c)
	{
		a = b;
		b = c;
		c = a%b;
	}
	printf("���Լ��Ϊ��%d\n",b);
	return 0;
}