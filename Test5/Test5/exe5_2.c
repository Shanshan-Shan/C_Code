//#define _CRT_SECURE_NO_WARNINGS 1
////2.д����������������������в�����Ҫ�����֣� �ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
////���ֲ��ң�
//#include<stdio.h>
//
//int main()
//{
//	int arr [] = {1,3,5,6,7,8,9};
//	int k = 9;                    //Ѱ�������е�����k,����±�
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����鳤��
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
//		else if (k > arr[mid]) //һ��Ҫ��else if����if������⣬
//			                   //���if���ʱ��ʹǰһ��ifΪ�棬�����ifҲҪ�����ж�
//							   //�����else if ��ֻ��ǰ��Ϊ�ٵ�ʱ������if �Ž����ж�
//							   //else if��������һ��������ǰ���£���������������
//		{
//			left = mid + 1;
//		}
//	    else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("���ź����Ҳ���\n");
//	}
//
//	return 0;
//}