#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int get_max(int x, int y, int z)
//{
//	int max = 0;
//	if ((x >= y) && (x >= z))
//	{
//		max = x;
//	}
//	else if (y >= z)
//	{
//		max = y;
//	}
//	else
//	{
//		max = z;
//	}
//	return max;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((get_max(a, b, c) * 2)<(a + b + c))
//		{
//			if ((a == b) && (b == c) && (a == c))
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b) || (b == c) || (a == c))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c, d, circum, area;
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	circum = a + b + c;
//	d = circum / 2;
//	area = sqrt(d*(d - a)*(d - b)*(d - c));
//	printf("circumference=%.2lf area=%.2lf", circum, area);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	if (N / 2)
		printf("%d %d", N / 2 + 1, N / 2);
	else
		printf("%d %d", N / 2, N / 2);
	return 0;
}