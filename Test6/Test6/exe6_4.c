#define _CRT_SECURE_NO_WARNINGS 1
//4. 创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、
   //实现reverse（）函数完成数组元素的逆置。自己设计函数的参数，返回值。
#include<stdio.h>

void reverse(int arr[], int sz)  //逆置数组：将首末数组元素交换；
{
	int i = 0;
	int j = 0;
	
	for (i=0,j = sz-1; i<=j; i++,j--)
	{
		int tmp = arr[j];
		arr[j] = arr[i];
		arr[i] = tmp;
	}
}

void empty(int arr[], int sz)  //清空数组
{
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		arr[j] = 0;
	}
}

void init(int arr[],int sz)   //初始化数组
{
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		arr[j] = j;
	}
}
void print(int arr[], int sz) //打印数组
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[6] = {1,3,5,7,9,0};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);

	printf("原始数组：\n");
	print(arr,sz);

	empty(arr, sz);
	printf("清空数组：\n");
	print(arr, sz);

	init(arr,sz);
	printf("初始化数组：\n");
	print(arr, sz);

	reverse(arr, sz);
	printf("逆置数组：\n");
	print(arr, sz);

	return 0;
}