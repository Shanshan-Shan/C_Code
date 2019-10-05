//#define _CRT_SECURE_NO_WARNINGS 1
////2.写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（折半查找）
////二分查找；
//#include<stdio.h>
//
//int main()
//{
//	int arr [] = {1,3,5,6,7,8,9};
//	int k = 9;                    //寻找数组中的数字k,输出下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组长度
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid]) //一定要用else if；用if会出问题，
//			                   //多个if语句时即使前一个if为真，后面的if也要继续判断
//							   //如果用else if 则只有前者为假的时候它的if 才接着判断
//							   //else if：不是上一个条件的前提下，如果是这个条件；
//		{
//			left = mid + 1;
//		}
//	    else
//		{
//			printf("找到了，下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("很遗憾，找不到\n");
//	}
//
//	return 0;
//}