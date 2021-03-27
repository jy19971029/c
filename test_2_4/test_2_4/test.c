#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int get_day(int x, int y)
//{
//	if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
//	{
//		return 31;
//	}
//	else if (y == 4 || y == 6 || y == 9 || y == 11)
//	{
//		return 30;
//	}
//	else
//	{
//		if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//		{
//			return 29;
//		}
//		else
//		{
//			return 28;
//		}
//	}
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		day = get_day(year, month);
//		printf("%d\n", day);
//	}
//	return 0;
//}




//#include<stdio.h>
//#include<math.h>
//int is_sushu(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_sushu(i))
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int is_runnian(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	if (is_runnian(year))
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}


//#include<stdio.h>
//void swap(int *pa, int*pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//
//}
//int main()
//{
//	int a = 10; 
//	int b = 20;
//	printf("原来：a=%d,b=%d\n", a, b);
//	swap(&a,&b);
//	printf("现在：a=%d,b=%d\n", a, b);
//	return 0;
//}


#include<stdio.h>
void dayin(int i)
{
	int j = 0;
	int k = 0;
	for (j = 1; j <= i; j++)
	{
		for (k = 1; k <= j; k++)
		{
			printf("%d*%d=%d ",k,j,k*j);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	scanf("%d",&i);
	dayin(i);
	return 0;
}