#define _CRT_SECURE_NO_WARNINGS 1
//2.���0��999֮������С�ˮ�ɻ������������ 
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
#include<stdio.h>
int main()
{
	int i = 0;
	
	for (i = 0; i < 1000; i++)
	{
		int n = i;
		if (n / 10 == 0)
		{
			if (n = n * n )
				printf("%d ", n);
		}
		else if (n / 100 == 0)
		{
			int j = 0;
			int k = 0;
			j = n / 10;
			k = n % 10;
			if (n == j * j + k * k)
			{
				printf("%d ", n);
			}
		}
		else if (n / 1000 == 0)
		{
			int j = 0;
			int k = 0;
			int z = 0;
			j = n / 100;
			k = n % 100 / 10;
			z = n % 10;
			if (n == j * j * j + k * k * k + z * z * z)
			{
				printf("%d ", n);
			}
		}
	}
	return 0;
}
