#define _CRT_SECURE_NO_WARNINGS 1
//4. ����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢
   //ʵ��reverse���������������Ԫ�ص����á��Լ���ƺ����Ĳ���������ֵ��
#include<stdio.h>

void reverse(int arr[], int sz)  //�������飺����ĩ����Ԫ�ؽ�����
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

void empty(int arr[], int sz)  //�������
{
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		arr[j] = 0;
	}
}

void init(int arr[],int sz)   //��ʼ������
{
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		arr[j] = j;
	}
}
void print(int arr[], int sz) //��ӡ����
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

	printf("ԭʼ���飺\n");
	print(arr,sz);

	empty(arr, sz);
	printf("������飺\n");
	print(arr, sz);

	init(arr,sz);
	printf("��ʼ�����飺\n");
	print(arr, sz);

	reverse(arr, sz);
	printf("�������飺\n");
	print(arr, sz);

	return 0;
}