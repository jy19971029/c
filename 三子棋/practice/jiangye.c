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
		printf("��ѡ��>:");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("��Ϸ��ʼ\n");
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
				printf("���Ӯ\n");
			else if (ret == '#')
				printf("����Ӯ\n");
			else
				printf("ƽ��\n");

        }
		else if (input == 0)
		
			printf("�˳���Ϸ\n");
		else
			printf("�����������������\n");
	} 
	while (input);


	return 0;
}