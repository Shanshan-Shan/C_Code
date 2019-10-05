#define _CRT_SECURE_NO_WARNINGS 1
//1.完成猜数字游戏。 
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
	//printf("请选择：\n");
	//scanf("%d",&input);
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏！\n");
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("请做出正确选择！\n");
			break;
		}
	} while (input);
	return 0;
}