//#define _CRT_SECURE_NO_WARNINGS 1
////2.求出0～999之间的所有“水仙花数”并输出。 
////“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
////在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
////例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 1000; i++)
//	{                         
//		int tmp = i;         
//		int n = 0;
//		int sum = 0;
//		//1.先计算位数n;
//		while (tmp)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.计算每一位数字的n次方和sum；
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + (int)pow(tmp % 10, n);  //pow(a,b)=a^b,返回值类型为double;
//			tmp = tmp / 10;
//		}
//		//3.比较
//		if (i == sum)
//			printf("%d ",i);
//	}
//	
//	
//	/*for (i = 0; i < 1000; i++)
//	{
//		int n = i;
//		if (n / 10 == 0)
//		{
//			if (n = n * n )
//				printf("%d ", n);
//		}
//		else if (n / 100 == 0)
//		{
//			int j = 0;
//			int k = 0;
//			j = n / 10;
//			k = n % 10;
//			if (n == j * j + k * k)
//			{
//				printf("%d ", n);
//			}
//		}
//		else if (n / 1000 == 0)
//		{
//			int j = 0;
//			int k = 0;
//			int z = 0;
//			j = n / 100;
//			k = n % 100 / 10;
//			z = n % 10;
//			if (n == j * j * j + k * k * k + z * z * z)
//			{
//				printf("%d ", n);
//			}
//		}
//	}*/
//	return 0;
//}