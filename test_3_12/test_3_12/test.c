#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int judge(char*str1, char*str2, int sz1, int  sz2)
//{
//	if (sz1 != sz2)
//		return 0;
//	else
//	{
//		int i = 0;
//		for (i = 0; i < sz1; i++)
//		{
//			char tmp = str1[0];
//			int j = 0;
//			for (j = 0; j < sz1 - 1; j++)
//			{
//				str1[j] = str1[j + 1];
//			}
//			str1[sz1 - 1] = tmp;
//			if (strcmp(str1, str2) == 1)
//			{
//				return 1;
//				break;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char str1[100] = { 0 };
//	char str2[100] = { 0 };
//	gets(str1);
//	gets(str2);
//	int sz1 = strlen(str1);
//	int sz2 = strlen(str2);
//	int ret=judge(str1, str2,sz1,sz2);
//	printf("%d\n",ret);
//	return 0;
//}





//void zuozhan(char*str, int sz,int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = str[0];
//		int j = 0;
//		for (j = 0; j < sz- 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[sz - 1] = tmp;
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int k = 0;
//	scanf("%d", &k);
//	int sz = strlen(str);
//	zuozhan(str, sz,k);
//	printf("%s",str);
//	return 0;
//}


int find_num(int(*p)[3], int x, int y, int z)
{
	int i = 0;
	int j = y - 1;
	while (j >= 0 && i < x)
	{
		if (p[i][j] < z)
			i++;
		else if (p[i][j] < z)
			j--;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int a[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12 };
	int ret=find_num(a, 4, 3, 13);
	if (ret == 1)
		printf("存在该数字\n");
	else
		printf("不存在该数字\n");
	return 0;
}