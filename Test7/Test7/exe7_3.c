#define _CRT_SECURE_NO_WARNINGS 1
////3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include<stdio.h>

int DigitSum(int n)       //�ݹ麯��DigitSum(n)
{
	if (n < 10)
	{
		return n;
	}
	return n % 10 + DigitSum(n / 10);
}
	
int main()
{
	int n = 0;
	printf("����һ���Ǹ�����:\n");
	scanf("%d",&n);
	
	DigitSum(n);
	printf("����֮��:%d\n", DigitSum(n));    //����Զ��庯������ֵ
	return 0;
}