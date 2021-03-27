#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	char arr[100] = "0";
//	return 0;
//}


#include<stdio.h>
#include<string.h>
void reverse(char*s1, char*s2)
{
	while (s1 < s2)
	{
		char tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
		s1++;
		s2--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr,arr+len-1);

	char*start = arr;
	char*end = arr;
	while (*start)
	{
		end = start;
		while ((*end != ' ') && (*end != 0))
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end = ' ')
			start = end + 1;
		else
			start = end;
	}	
	printf("%s\n", arr);
	return 0;
}
