#define _CRT_SECURE_NO_WARNINGS 1
//3. ��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
#include<stdio.h>

int main()
{
	int a = 0;
	int sum = 0;
	int i = 0;
	int k = 0;
	printf("������һ��1~9�����֣�");
	scanf("%d",&a);
	for (i = 1; i <= 5; i++)
	{
		k = k * 10 + a;//���ܱ�a��ֵ
		sum = sum + k;
	}
	printf("sum=%d\n",sum);
	return 0;
}