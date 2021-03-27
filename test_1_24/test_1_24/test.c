#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int compare(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	printf("两个整数中较大的数为%d\n", compare(a, b));
	return 0; 
}



