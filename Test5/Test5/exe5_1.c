#define _CRT_SECURE_NO_WARNINGS 1
//1.��ɲ�������Ϸ�� 
#include<stdio.h>

void menu()
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}

int main()
{
	int input = 0;
	//printf("��ѡ��\n");
	//scanf("%d",&input);
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("��������ȷѡ��\n");
			break;
		}
	} while (input);
	return 0;
}