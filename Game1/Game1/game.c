#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//Դ�ļ��ŵ��Ǻ����Ķ���

//��ʼ������ �ո�
void InitBoard(char board[ROW][COL], int row, int col)
{ 
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ӡ���� ��ʾ��
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)      //��ӡ��
	{
		for (j = 0; j < col; j++)  //��ӡһ�е�����
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)   //���һ�е�'|'��Ҫ
				printf("|");
		}
		printf("\n"); // ��ӡ��һ�е�һ���֣����У�

		//��ӡ�ָ��У����һ�в�Ҫ
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
					printf("|");
			}
		}
		printf("\n");  // ��ӡ��һ�У��ٻ���
	}
}

//�����
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>\n");
	//��һ�������ߣ���ѭ��
	while (1)
	{
		printf("������Ҫ�ߵ�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col&&board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}
	}
}

//������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");

	while (1)
	{
		//������������õ�������ߣ�
		x = rand() % row;   //��ʱrow=3, %row,����0`2���������
		x = rand() % col;   //����0`2���������
		//������0~n-1���������������� %n ���ɡ�

		//�϶��Ϸ�������Ҫ����ǲ��ǿո�Ȼ��ѭ�����Ӽ���
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//�˺���û�зŵ�ͷ�ļ�����Ϊ����������˲���
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//������������
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;   //����
}

//�ж���Ӯ�������ж����л������л��߶Խ����ǲ�����ͬ���������״̬������Ӯor���Ӯorƽ��or����
char IsWine(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж������ǲ�����ͬ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return  board[i][0];
		}
	}
	//�ж������ǲ�����ͬ
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return  board[0][i];
		}
	}
	//�ж������Խ����ǲ�����ͬ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return  board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return  board[0][2];
	}
	//����������ǵ���Ӯor���Ӯ����״̬
	//���ƽ��
	if (IsFull(board,row,col)==1) //�����ڲ���Сд
	{
		return 'Q';
	}
	return 'C';//�ߵ���һ��ֻ���Ǽ���
}