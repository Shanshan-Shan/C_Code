#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//源文件放的是函数的定义

//初始化棋盘 空格
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

//打印棋盘 显示线
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)      //打印行
	{
		for (j = 0; j < col; j++)  //打印一行的数据
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)   //最后一列的'|'不要
				printf("|");
		}
		printf("\n"); // 打印完一行第一部分，换行；

		//打印分割行，最后一行不要
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
					printf("|");
			}
		}
		printf("\n");  // 打印完一行，再换行
	}
}

//玩家走
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	//走一步继续走，死循环
	while (1)
	{
		printf("请输入要走的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col&&board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("坐标非法，请重新输入：\n");
		}
	}
}

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");

	while (1)
	{
		//生成随机数，让电脑随机走；
		x = rand() % row;   //此时row=3, %row,生成0`2的随机数；
		x = rand() % col;   //生成0`2的随机数；
		//想生成0~n-1的随机数，让随机数 %n 即可。

		//肯定合法，还需要检测是不是空格，然后循环落子即可
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//此函数没有放到头文件，因为这个函数别人不用
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//遍历整个数组
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
	return 1;   //满了
}

//判断输赢函数，判断三行或者三列或者对角线是不是相同，输出四种状态：电脑赢or玩家赢or平局or继续
char IsWine(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行是不是相同
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return  board[i][0];
		}
	}
	//判断三列是不是相同
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return  board[0][i];
		}
	}
	//判断两条对角线是不是相同
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return  board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return  board[0][2];
	}
	//上面输出的是电脑赢or玩家赢两种状态
	//输出平局
	if (IsFull(board,row,col)==1) //函数内部用小写
	{
		return 'Q';
	}
	return 'C';//走到这一步只能是继续
}