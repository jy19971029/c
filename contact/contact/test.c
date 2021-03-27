#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
int main()
{
	int input = 0;
	struct contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("退出游戏\n");
			SaveContact(&con);
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case QUE:
			QueContact(&con);
			break;
		case MOD:
			ModContact(&con);
			break;
		case SHO:
			Show(&con);
			break;
		case QOR:
			QorContact(&con);
			break;
		default:
			printf("选择有误，请重新选择\n");
			break;
		}
	} 
	while (input);
	free(con.arr);
	con.arr = NULL;
}