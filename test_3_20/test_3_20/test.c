#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[32] = { 0 };
	int a = 0;
	int b = 1;
	int c = 1;
	int i = 1;
	int input = 0;
	int left = 0;
	int right = 0;
	while (c <= 1000000)
	{
		arr[i] = c;
		a = b;
		b = c;
		c = a + b;
		i++;
	}
	arr[i] = c;
	scanf("%d", &input);
	i = 0;
	while ((arr[i + 1] - input)<0)
	{
		i++;
	}
	if ((arr[i] == input) || (arr[i + 1] == input))
	{
		printf("%d\n", 0);
	}
	else
	{
		left = input - arr[i];
		right = arr[i + 1] - input;
		printf("%d\n", (left>right ? right : left));
	}
	return 0;
}