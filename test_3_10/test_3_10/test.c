#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void swap(char*arr, char*brr)
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		*brr = *arr;
//		arr++;
//		brr++;
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	printf("杨辉三角\n");
//	int arr[100] = {0,1};
//	int brr[100] = { 0,1 };
//	int i = 0;
//	for (i = 1; i <= input; i++)
//	{
//		swap(arr, brr);
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			arr[j + 1] = brr[j] + brr[j+1];
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%d ", arr[j + 1]);
//		}
//		swap(arr,brr);
//		printf("\n");
//	}
//	return 0;
//
//}

//void judge(char a)
//{
//	int count = 0;
//	if (a != 'A')
//		count++;
//	if (a == 'C')
//		count++;
//	if (a == 'D')
//		count++;
//	if (a != 'D')
//		count++;
//	if (count == 3)
//		printf("%c是凶手\n", a);
//	
//}
//int main()
//{
//	char str[4] = { 'A', 'B', 'C', 'D' };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		judge(str[i]);
//	}
//	return 0;
//}


//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	char brr[5] = { 'A', 'B', 'C', 'D', 'E' };
//	int i = 0;
//	int x = 0;
//	while (1)
//	{
//		char arr[5] = { 0 };
//		for (i = 0; i < 5; i++)
//		{
//			while (1)
//			{
//				x = rand() % 5;
//				if (arr[x] == 0)
//				{
//					arr[x] = brr[i];
//					break;
//				}
//			}						
//		}
//		if (
//			((arr[1] == 'B') + (arr[2] == 'A') == 1) &&
//			((arr[1] == 'B') + (arr[3] == 'E') == 1) &&
//			((arr[0] == 'C') + (arr[1] == 'D') == 1) &&
//			((arr[4] == 'C') + (arr[2] == 'D') == 1) &&
//			((arr[3] == 'E') + (arr[0] == 'A') == 1)
//			)
//		{
//			for (i = 0; i < 5; i++)
//			{
//				printf("第%d名是%c\n",i+1,arr[i]);
//			}
//			break;
//		}
//	}
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x /y;
//}
//void menu()
//{
//	printf("******************\n");
//	printf("***1 Add  2 Sub***\n");
//	printf("***3 Mul  4 Div***\n");
//	printf("******0 Exit******\n");
//	printf("******************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*arr[])(int, int) = { 0, Add, Sub, Mul, Div };
//	while (1)
//	{
//		menu();
//		printf("请做出选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数:>");
//			scanf("%d%d",&x,&y);
//			int ret=arr[input](x,y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入有误，请重新选择\n");
//		}
//	}
//
//	return 0;
//}









#include<stdio.h>
typedef   unsigned int size_t;
void bubble_sort(void *base, size_t sz, size_t width, int(*p)(void*e1, void*e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ((char*)base + j*width)((char*)base + j*width)

		}
	}
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	return 0;
}