#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>



int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int q = 0;
	for (i = 0; i <= 100000; i++)
	{
		int z = i;
		int count = 1;
		while ((i / 10) != 0)
		{
			count++;
			i = i / 10;
		}
		int sum = 0;
		while (1)
		{

			int num = 1;
			int temt = z;
			k = temt / 10;
			q = temt % 10;
			temt = k;
			for (j = 0; j < count; j++)
			{
				num *= q;
			}
			sum += num;
			if (temt == 0)
			{
				break;
			}
		}
		i = z;
		if (z == sum)
		{
			printf("%d\n", z);
		}
		return 0;
	}




















	////int main()
	////{
	////	int arr[] = { 1, 2, 3, 4, 5 };
	////	int sz = sizeof(arr) / sizeof(arr[0]);
	////	int *p = arr;
	////	int i = 0;
	////	for (i = 0; i < sz; i++)
	////	{
	////		printf("%d\n", (*p)++);
	////	}
	////	return 0;
	////}
	//
	//
	////double cal(int k)
	////{
	////	int i = 0;
	////	double arr[5] = { 0 };
	////	arr[0] = 1;
	////	double sum = 0;
	////	for (i = 0; i < 4; i++)
	////	{
	////		arr[i + 1] = arr[i] + pow(10.0, i + 1);
	////	}
	////	for (i = 0; i <= 5; i++)
	////	{
	////		sum += arr[i];
	////	}
	////	return k*sum;
	////}
	////int main()
	////{
	////	int input = 0;
	////	int i = 0;
	////	while (1)
	////	{
	////		scanf("%d", &input);
	////		if (input >= 1 && input <= 9)
	////		{
	////			double num = cal(input);
	////			printf("%lf\n",num);
	////			break;
	////		}
	////	}
	////	return 0;
	////}
	//
	//
	////int main()
	////{
	////	int k = 1 + 11 + 111 + 1111 + 11111;
	////	printf("%d",k*9);
	////	return 0;
	////}
	//
	//
	int main()
	{
		int input = 0;
		int i = 0;
		int num = 0;
		scanf("%d",&input);
		int k = input;
		for (i = 1; i <=5; i++)
		{
			num = num + input;
			input = input * 10 + k;
		}	
		printf("%d\n",num);
		return 0;
	}