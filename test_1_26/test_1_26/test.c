#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 3, 5, 6, 7, 10, 13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int mid = 0;
//	int k = 7;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下角标为%d\n",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("没有这个数\n");
//		}
//	}
//	
//	return 0;
//}


//int main()
//{
//
//	int arr[3] = { 0 };
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int k = 2;
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	for (j = 0; j < 2; j++)
//	{
//		for (i = 0; i < k; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				m = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = m;
//			}
//		}
//		k--;
//	}
//	printf("三个数从大到小的顺序为%d %d %d\n", arr[0], arr[1], arr[2]);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	for (i = 1; i <= a&&i <= b; i++)
//	{
//		if ((a%i == 0) && (b%i == 0))
//		{
//			max = i;
//		}
//	}
//	printf("这两个数的最大公约数为%d\n", max);
//	return 0;
//}


int main()
{
	int i =0 ;
	for (i = 1000; i < 2001; i += 4)
	{
		if ((i % 100 == 0) && (i % 400 != 0))
		{
			continue;
		}
		printf("1000年到2000年闰年的年份为%d\n",i);
	}
	return 0;
}