#define _CRT_SECURE_NO_WARNINGS 1
//数组应用实例--三子棋

#include"game.h"

void game()  //玩游戏--三子棋
{
	char ret = 0;//接收IsWine();的返回值

	char board[ROW][COL] = { 0 };     //棋盘--board初始化为全部空格' '，属于游戏模块
	InitBoard(board, ROW, COL);       //初始化棋盘，初始化为全部空格' '，属于游戏模块
	DisplayBoard(board, ROW, COL);  //显示棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//无论玩家走还是电脑走，走完都有可能有输赢；
		//判断电脑赢or玩家赢or平局or继续，四种状态；
		ret = IsWine(board, ROW, COL);  //判断输赢的函数，输出四种状态
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWine(board, ROW, COL);  //判断输赢的函数，输出四种状态
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
 
void menu()  //打印菜单
{
	printf("***********************************\n");
	printf("*******        1.Play       *******\n");
	printf("*******        0.Exit       *******\n");
	printf("***********************************\n");
}

void Test()           //开始游戏
{
	int input = 0;
	//srand只用调用一次，所以放到最外面。
	srand((unsigned int)time(NULL));//参数是设置随机数的生成起点，
	                                //用time,只要返回值（unsigned int），所以不传参，用空指针NULL

	do   //do while循环保证循环至少执行一次，menu就是要直接执行的
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);//scanf的%d后面不能有\n!!!!!
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新输入：\n");
			break;
		}
		//switch 语句也可以用if else来实现；
		/*if (input == 1)
		{
			printf("开始游戏！\n");
			game();
		}
		else if (input == 0)
		{
			printf("退出游戏！\n");
		}
		else
		{
			printf("选择错误，请重新输入：\n");
		}*/
	} while (input);
}

int main()
{
	Test();  //玩游戏
	
	return 0;
}
 