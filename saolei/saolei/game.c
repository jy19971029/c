#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void ShowBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		if (i == 0)
		{
			printf("%c ", ' ');
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count < EASY_COUNT)
	{
		x = rand() % row+1;
		y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}

}
const int CountMine(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			count += board[i][j] - '0';
		}
	}
	return count;
}
void FindMine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int num = 0;
	while (num<ROW*COL - EASY_COUNT)
	{
		printf("请输入一个坐标:>");
		scanf("%d%d",&x,&y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (board1[x][y] == '1')
			{
				printf("很不幸，你被炸死了\n");
				ShowBoard(board1, ROW, COL);
				break;
			}
			else
			{
				count = CountMine(board1,x,y);
				board2[x][y] = count + '0';
				ShowBoard(board2, ROW, COL);
				num++;
			}
		}
		else
		{
			printf("坐标输入有误，请重新输入\n");
		}
	}
	if (num == ROW*COL - EASY_COUNT)
	{
		printf("恭喜你，通过扫雷游戏\n");
		ShowBoard(board1, ROW, COL);
	}
}