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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳���Ϸ\n");
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
			printf("ѡ������������ѡ��\n");
			break;
		}
	} 
	while (input);
	free(con.arr);
	con.arr = NULL;
}