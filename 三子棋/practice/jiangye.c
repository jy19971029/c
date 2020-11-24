#define _CRT_SECURE_NO_WARNINGS 1
#include "wuchunxue.h"
int main()
{
	int input;
	char ret;
	char board[hang][lie] = { 0 };
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		printf("请选择>:");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("游戏开始\n");
			initboard(board, hang, lie);
			displayboard(board, hang, lie);
			while (1)
			{
				playermove(board, hang, lie);
				displayboard(board, hang, lie);
				ret = iswin(board, hang, lie);
				if (ret != 'C')
					break;
				computemove(board, hang, lie);
				displayboard(board, hang, lie);
				ret = iswin(board, hang, lie);
				if (ret != 'C')
					break;
			}
			if (ret == '*')
				printf("玩家赢\n");
			else if (ret == '#')
				printf("电脑赢\n");
			else
				printf("平局\n");

        }
		else if (input == 0)
		
			printf("退出游戏\n");
		else
			printf("输入错误，请重新输入\n");
	} 
	while (input);


	return 0;
}