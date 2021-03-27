#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("100到200之间的素数有%d\n", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if ((i/10)%10==9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	double sum = 0;
//	double a = 0;
//	int b = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		a = 1.0 / i;
//		a *= b;
//		sum += a;
//		b*=-1;
//
//	}
//	printf("%.5lf\n",sum);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int m = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			m = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = m;
//		}
//	}
//	printf("%d\n",arr[9]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i*j;
//			printf("%d*%d=%d  ", j,i,  k);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 3, 56, 59, 78, 88, 96,100,111 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 8;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下角标为%d\n", mid);
//				break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char str1[] = "wlecome to bit!!!!!";
//	char str2[] = "*******************";
//	int i = 0;
//	int sz = strlen(str1);
//	printf("%s\n", str2);
//	for (i = 0; i < (sz / 2); i++)
//	{
//		str2[i] = str1[i];
//		str2[sz - 1 - i] = str1[sz - 1 - i];
//		Sleep(1000);
//		system("cls");
//		printf("%s\n",str2);
//		if ((sz % 2 == 1) && (i == (sz / 2)-1))
//		{Sleep(1000);
//			system("cls");
//			
//		}
//	}
//	if (sz % 2 == 1)
//	{
//		printf("%s\n", str1);
//	}
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("****************\n");
	printf("*****1 play*****\n");
	printf("*****0 exit*****\n");
	printf("****************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请在1到100之间猜一个数:>");
		scanf("%d",&guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}

	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		printf("请选择（1/0）:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("推出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入有误，请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}