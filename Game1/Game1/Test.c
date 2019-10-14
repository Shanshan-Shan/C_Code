#define _CRT_SECURE_NO_WARNINGS 1
//����Ӧ��ʵ��--������

#include"game.h"

void game()  //����Ϸ--������
{
	char ret = 0;//����IsWine();�ķ���ֵ

	char board[ROW][COL] = { 0 };     //����--board��ʼ��Ϊȫ���ո�' '��������Ϸģ��
	InitBoard(board, ROW, COL);       //��ʼ�����̣���ʼ��Ϊȫ���ո�' '��������Ϸģ��
	DisplayBoard(board, ROW, COL);  //��ʾ����
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//��������߻��ǵ����ߣ����궼�п�������Ӯ��
		//�жϵ���Ӯor���Ӯorƽ��or����������״̬��
		ret = IsWine(board, ROW, COL);  //�ж���Ӯ�ĺ������������״̬
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWine(board, ROW, COL);  //�ж���Ӯ�ĺ������������״̬
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
 
void menu()  //��ӡ�˵�
{
	printf("***********************************\n");
	printf("*******        1.Play       *******\n");
	printf("*******        0.Exit       *******\n");
	printf("***********************************\n");
}

void Test()           //��ʼ��Ϸ
{
	int input = 0;
	//srandֻ�õ���һ�Σ����Էŵ������档
	srand((unsigned int)time(NULL));//�����������������������㣬
	                                //��time,ֻҪ����ֵ��unsigned int�������Բ����Σ��ÿ�ָ��NULL

	do   //do whileѭ����֤ѭ������ִ��һ�Σ�menu����Ҫֱ��ִ�е�
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);//scanf��%d���治����\n!!!!!
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ��������������룺\n");
			break;
		}
		//switch ���Ҳ������if else��ʵ�֣�
		/*if (input == 1)
		{
			printf("��ʼ��Ϸ��\n");
			game();
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ��\n");
		}
		else
		{
			printf("ѡ��������������룺\n");
		}*/
	} while (input);
}

int main()
{
	Test();  //����Ϸ
	
	return 0;
}
 