#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("****************\n");
	printf("*****1 paly*****\n");
	printf("*****0 exit*****\n");
	printf("****************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][LINE];
	InitBoard(board, ROW, LINE);
	PrintBoard(board, ROW, LINE);
	while (1)
	{
		PlayerMove(board, ROW, LINE);
		ret = CheckWin(board, ROW, LINE);
		if (ret != 'C')
		{
			break;
		}
		PrintBoard(board, ROW, LINE);
		ComputeMove(board, ROW, LINE);
		ret = CheckWin(board, ROW, LINE);
		if (ret != 'C')
		{
			break;
		}
		PrintBoard(board, ROW, LINE);
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	PrintBoard(board, ROW, LINE);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������������ѡ��\n");
			break;
		}
	}
	while (input);
}