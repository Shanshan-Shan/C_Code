//#define _CRT_SECURE_NO_WARNINGS 1
//
////2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
//#include<stdio.h>
//
//int power(int n, int k)  //�ǵݹ�
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 0; i < k; i++)
//	{
//		ret *= n;
//	}
//	return ret;
//}

//int power(int n, int k)  //�ݹ�
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n* power(n, k - 1);
//}
 
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("������n��k,����n^k:\n");
//	scanf("%d %d",&n,&k);               //scanf���治����\n,��Ҫע��&��
//	printf("%d^%d=%d\n", n,k,power(n, k));
//	return 0;
//}