//�����������Ӵ�С���
#include <stdio.h>
int main()
{
	int a = 8;
	int b = 3;
	int c = 6;
	int tmp = 0;
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("�Ӵ�С�����ǣ�%d %d %d\n",a,b,c);
	return 0;
}