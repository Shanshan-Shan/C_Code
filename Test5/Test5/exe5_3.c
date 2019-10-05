//#define _CRT_SECURE_NO_WARNINGS 1
////3.编写代码模拟三次密码输入的场景。 
////最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
////可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	
//
//	for (i = 0; i < 3;i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}