//将数组A中的内容和数组B中的内容进行交换（数组一样大） 
//#include<stdio.h>
//
//int main()
//{
//	int arrA[5] = {1,2,3,4,5};
//	int arrB[5] = {6,7,8,9,0};
//	int arrTmp[5] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		arrTmp[i] = arrA[i];
//		arrA[i] = arrB[i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		arrB[i] = arrTmp[i];
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//	printf("\n");
//	return 0;
//}