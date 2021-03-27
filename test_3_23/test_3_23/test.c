#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int arr[100] = { 0 };
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	int left = 0;
	int right = num - 1;
	int max = arr[0];
	int sum = 0;
	int flag = 0;
	int MIN = 0;
	int MAX = 0;
	for (i = 0; i < num; i++)
	{
		if (arr[i]>0)
		{
			flag = 1;
			break;
		}
		if (arr[i] > max)
			max = arr[i];
	}
	if (flag == 1)
	{
			while (arr[left] <= 0)
				left++;

			while (arr[right] <= 0)
				right--;
		int zuo = left;
		int you = right;

		while (left <= right)
		{

			while (left <= right)
			{
				sum = 0;
				for (i = left; i <= right; i++)
				{
					sum += arr[i];
				}
				if (sum > max)
				{
					max = sum;
					MIN = left;
					MAX = right;
				}
				right--;
			}
			right = you;
			left = ++zuo;
		}

	}
	printf("%d %d %d", max, arr[MIN], arr[MAX]);
	return 0;
}









//for (i = left; i <= right; i++)
//{
//	sum += arr[i];
//}
//if (sum > max)
//{
//	max = sum;
//}
//left++;
//right--;