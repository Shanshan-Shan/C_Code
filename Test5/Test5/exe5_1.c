//#define _CRT_SECURE_NO_WARNINGS 1
////1.��ɲ�������Ϸ�� 
//#include<stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//
//void game()
//{
//	//1.�������ֵ
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1; //srand:�����������㣬��ʱ���ʵ�֣�rand()%100+1;������1-100֮����������
//	              //rand�ڶ���������ҵ����ֵ�����ֵ
//	//printf("%d\n",ret);
//	//2.������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d",&guess);
//		if (guess < ret)
//		{
//		printf("��С��\n");
//		}
//		else if(guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//���������������棬��������һ��,������������������
//	srand((unsigned int)time(NULL));//time:ʱ��������ص�ǰʱ�����������ʼʱ��Ĳ�ֵ
//	int input = 0;
//	do                            //do whileѭ������ִ��һ��
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("��������ȷѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}