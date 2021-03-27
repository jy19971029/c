#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct lover
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char university[30];
//};
//int main()
//{
//	struct lover jiangye = {"jiangye",24,"nan","southeast university"};
//	struct lover wuchunxue = { "wuchunxue", 25, "nv", "chizhouxueyuan" };
//	struct lover* pj = &jiangye;
//	struct lover* pw = &wuchunxue;
//	printf("%s %d %s %s\n", pj->name, pj->age, pj->sex, pj->university);
//	printf("%s %d %s %s\n", pw->name, pw->age, pw->sex, pw->university);
//	return 0;
//}






//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int oushu[16] = { 0 };
//	int jishu[16] = { 0 };
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0)
//		{
//			if ((flag&input) != 0)
//			{jishu[15 - i / 2] = 1;
//			flag = flag << 1;
//			}	
//		}
//		else
//		{
//			if ((flag&input )!= 0)
//			{
//				oushu[15 - i / 2] = 1;
//				flag = flag << 1;
//			}
//		}
//	}
//	printf("偶数位\n");
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d ", oushu[i]);
//	}
//	printf("\n");
//	printf("奇数位\n");
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d ", jishu[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
int main()
{
	int input = 0;
	int i = 0;
	while (~scanf("%d", &input))
	{
		int flag = 1;
		int count = 0;
		for (i = 0; i<32; i++)
		{
			if ((flag&input) != 0)
			{
				count++;
			}
			flag = flag << 1;
		}
		printf("%d\n", count);
	}
	return 0;
}