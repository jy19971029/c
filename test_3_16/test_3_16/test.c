#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char*my_strstr(char*s1, char* s2)
{
	char *start = s2;
	char *ret = s1;
	while (*s1)
	{
		s2 = start;
		ret = s1;
		while (*s1 == *s2)
		{
			
			s1++;
			s2++;
			if (*s2 == 0)
				return ret;
		}
		s1 = ret;
		s1++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "jiannnsgye";
	char arr2[] = "nsgyee";
	printf("%s\n",my_strstr(arr1,arr2));
	return 0;
}