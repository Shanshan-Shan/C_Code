//#define _CRT_SECURE_NO_WARNINGS 1
////1.完成猜数字游戏。 
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
//	//1.生成随机值
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1; //srand:产生随机数起点，用时间戳实现；rand()%100+1;（产生1-100之间的随机数）
//	              //rand在定义里可以找到随机值的最大值
//	//printf("%d\n",ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d",&guess);
//		if (guess < ret)
//		{
//		printf("猜小了\n");
//		}
//		else if(guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//这句放在主函数里面，这样调用一次,产生的随机数更加随机
//	srand((unsigned int)time(NULL));//time:时间戳，返回当前时间点与计算机开始时间的差值
//	int input = 0;
//	do                            //do while循环至少执行一次
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("请做出正确选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}