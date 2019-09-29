//求十个整数中的最大值
#include<stdio.h>
int main()
{
	int arr[] = { 0, 1, 2, 9, 4, 5, 6, 7, 8, 3 };
	int i = 0;
	int max = 0;

	for (i = 1; i <= 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	printf("最大的整数是：%d\n", max);
	return 0;
}