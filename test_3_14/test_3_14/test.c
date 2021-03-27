#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//#include<assert.h>
//char*my_strcpy(char*det, const char*str)
//{
//	assert(det != NULL);
//	assert(str != NULL);
//	char* ret = det;
//	while (*det++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char det[] = "**********************************";
//	char str[] = "jiangye loves wuchunxue";
//	printf("%s\n",my_strcpy(det, str));
//	return 0;
//}



//char* my_strstr(char*s1, char*s2)
//{
//	char*cp = s1;
//	while (*cp)
//	{
//		char*p1 = cp;
//		char*p2 = s2;
//		while ((*p1) && (*p2) && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == 0)
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[50] = "adffdfggggdg";
//	char arr2[] = "gdf";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s\n",ret);
//	return 0;
//}








//char* my_strcat(char* s1, const char* s2)
//{
//	assert(s1&&s2);
//	char* ret = s1;
//	while (*s1)
//	{
//		s1++;
//	}
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	return ret;
//}








//char* my_strcpy(char* s1, const char* s2)
//{
//	assert(s1&&s2);
//	char*p = s1;
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	return p;
//}







//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1&&s2);
//	while (*s1 == *s2)
//	{
//		if ((*s1 == 0) && (*s2 == 0))
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}



int my_strlen(const char*s1)
{
	assert(s1 != NULL);
	int count = 0;
	while (*s1++)
	{
		count++;
	}
	return count;
}



int main()
{
	char arr1[] = "abch1111";
	char arr2[] = "abcz";
	printf("%d\n",my_strlen(arr1));
}










