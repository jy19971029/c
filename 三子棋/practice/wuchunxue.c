#define _CRT_SECURE_NO_WARNINGS 1
#include "wuchunxue.h"
void menu()
{
	printf("*************************\n");
	printf("******1 play 0 exit******\n");
	printf("*************************\n");
}
void initboard(char board[hang][lie], int han, int li)
{
	int i, j;
	for (i = 0; i < han; i++)
	{
		for (j = 0; j < li; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[hang][lie], int han, int li)
{
	int i, j;
	for (i = 0; i < han; i++)
	{
		for (j = 0; j < li; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < li - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < han - 1)
		{
			for (j = 0; j < li; j++)
			{
				printf("---");
				if (j < li - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void playermove(char board[hang][lie], int han, int li)
{
	int i, j;
	while (1)
	{
		printf("请输入一个坐标>:");
		scanf("%d%d", &i, &j);
		if (0 < i&&i <= han && 0 < j&&j <= li)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
				printf("该位置已被占用\n");
		}
		else
			printf("坐标输入有误，请重新输入\n");
	}
}

void computemove(char board[hang][lie], int han, int li)
{
	printf("电脑走>:\n");
	while (1)
	{
		int x = rand() % han;
		int y = rand() % li;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


int isfull(char board[hang][lie], int han, int li)
{
	int i, j;
	for (i = 0; i < han; i++)
	{
		for (j = 0; j < li; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char iswin(char board[hang][lie], int han, int li)
{
	int i;
	for (i = 0; i < han; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (i = 0; i < li; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
	if (isfull(board, hang, lie) == 1)
		return 'Q';
	else
		return 'C';


}