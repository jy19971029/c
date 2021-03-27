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
		printf("电脑赢\n");
	}
	else if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else
	{
		printf("平局\n");
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
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新选择\n");
			break;
		}
	}
	while (input);
}