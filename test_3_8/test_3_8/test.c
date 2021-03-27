#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	unsigned int a = 3;
//	unsigned int b = 4;
//	unsigned int c = a - b;
//	printf("%u\n",c);
//	return 0;
//}

#include<stdio.h>

#include<string.h>

//int main()
//
//{
//
//	char arr[100] = { 0 };
//
//	char c[100] = { 0 };
//
//	int i = 0;
//
//	gets(arr);
//
//	int sz = strlen(arr);
//
//	for (i = 0; i<sz; i++)
//
//	{
//
//		c[sz - 1 - i] = arr[i];
//
//	}
//
//	for (i = 0; i<sz; i++)
//
//	{
//
//		printf("%c", c[i]);
//
//	}
//
//	return 0;
//
//}



//int main()
//{
//	float a =(float) 3.14;
//	printf("%f",a);
//	return 0;
//}




//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	printf("%d", *p);
//	return 0;
//}

void print(int arr[1], int k)
{
	int i = 0;
	for (i = 0; i < k; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[5] = { 1, 2, 34, 5, 6 };
	int k = sizeof(arr) / sizeof(arr[0]);
	print(arr,k);
	return 0;
}