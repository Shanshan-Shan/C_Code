//ͷ�ļ�������������

#include<stdio.h>
#include<time.h>   //time��ͷ�ļ�
#include<stdlib.h> //srand��ͷ�ļ�

#define ROW 3   //#define�������
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);  //��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ����

void PlayerMove(char board[ROW][COL], int row, int col);   //�����
void ComputerMove(char board[ROW][COL], int row, int col); //������
//���Ӯ���ء�*��
//����Ӯ�����ء�#��
//ƽ��--��Q��
//����--'C'
char IsWine(char board[ROW][COL], int row, int col);   //�ж���Ӯ