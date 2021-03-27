#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include"add.h"
////void print(int x)
////{
////	if(x > 9)
////	{
////		print(x / 10);
////	}
////		printf("%d ",x % 10);
////}/*int n = 0;
//	scanf("%d", &n);
//	print(n);*/
//int main()
//{
//	
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
////int a = 15;
//	//int b = 20;
//	//int sum = Add(a, b);
//	//printf("sum=%d\n",sum);
//	/*printf("hehe\n");
//	main();*/
//	/*char arr[] = "abcdefg";
//	my_strlen(arr);*/
//
//	/*char *p = '1';
//	p++;
//	printf("%c",p);*/





//#include<stdio.h>
//int jiang(int x)
//{
//	if (x < 2)
//	{
//		return 1;
//	}
//	return x*(jiang(x-1));		
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ans=jiang(n);
//	printf("%d\n",ans);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int ans = 1;
//	scanf("%d",&n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ans *= i;
//	}
//	printf("%d\n",ans);
//	return 0;
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcd";
//	int i = strlen(arr);
//	printf("%d\n",i);
//	return 0;
//}



//#include<stdio.h>
//int my_strlen(char* x)
//{
//	if (*x != '\0')
//	{
//		return 1 + my_strlen(x + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int i = my_strlen(arr);
//	printf("%d\n",i);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//void  reverse_string(char* x)
//{
//	int sz = strlen(x);
//	char temp = *x;
//	*x = *(x+sz-1);
//	*(x + sz - 1) = '\0';
//	if (strlen(x + 1) >= 2)
//	{
//		reverse_string(x+1);
//	}
//	*(x + sz - 1) = temp;
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	int i;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%c ",arr[i]);
//	}
//	return 0;
//}


//int Pow(int n,int k)
//{
//	if (k > 1)
//		return n *Pow(n,k-1);
//	else
//		return n ;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d", Pow(3,4));
//	return 0;
//}



#include<stdio.h>
int fab(int x)
{
	int a = 1; 
	int b = 1; 
	int c = 1;
	if (x <= 2)
		return c;
	else
	{
		while (x > 2)
		{
			a = b;
			b = c;
			c = a + b;
			x--;
		}
		return c;
	}
}
int main()
{
	printf("%d\n", fab(5));
	return 0;
}
