#define _CRT_SECURE_NO_WARNINGS 1
//5.ʵ��һ���������ж�һ�����ǲ���������
#include<stdio.h>
#include<math.h>


void prime(int num)
{
	int i = 0;
	int k = 0;
	k = sqrt(num);  //�ж�����������2����ƽ���Ƿ�������Ϊ0���ɣ�
	for (i = 2; i <= k; i++)
	{
		if (num%i==0)
		{
			printf("����������\n");
		}
	}
	printf("��������\n");

}

int main()
{
	int num = 0;
	printf("������һ������1��������\n");
	scanf("%d",&num);
	prime(num);

	return 0;
}