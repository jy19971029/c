#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define my_offsetof(jiegou,member) (unsigned int)&(((jiegou*)0)->member)
//typedef struct Family
//{
//	int i;
//	char arr[3];
//}Family;
//int main()
//{
//	
//	printf("%u", my_offsetof(Family, i));
//	return 0;
//}


struct NOTE
{
	int a : 1;
	short b : 10;
	char c;
	long d:2;
};
int main()
{
	printf("%d\n", sizeof(struct NOTE));
	return 0;
}
