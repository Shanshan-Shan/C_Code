#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include<stdio.h>

void print(int n)
{
	//int i = n;
	if (n < 10)
	{
		printf("%d\n",n);
	}
	else
	{
			//printf("%d\n",n%10);  //�����������˳�����˳�����ÿһλ
			print(n / 10);          //�����������˳�����˳�����ÿһλ
			printf("%d\n", n % 10); //�����������˳�����˳�����ÿһλ
	}
}

int main()
{
	int n = 0;
	printf("������һ��������\n");
	scanf("%d",&n);
	print(n);

	return 0;
}