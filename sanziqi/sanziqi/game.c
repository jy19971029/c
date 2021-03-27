#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROW][LINE], int row, int line)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < line; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void PrintBoard(char board[ROW][LINE], int row, int line)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < line; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < line - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < line; j++)
			{
				printf("---");
				if (j < line - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}	
	}
}

void PlayerMove(char board[ROW][LINE], int row, int line)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入一个坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= line)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		}
		else
		{
			printf("坐标输入有误\n");
		}
	}
}
void ComputeMove(char board[ROW][LINE], int row, int line)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % line;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
const int CheckFull(char board[ROW][LINE], int row, int line)
{
	int flag = 1;
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < line; j++)
		{
			if (board[i][j] == ' ')
			{
				flag = 0;
			}
		}
	}
	return flag;
}
char CheckWin(char board[ROW][LINE], int row, int line)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < line; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	if (CheckFull(board, row, line))
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}

}