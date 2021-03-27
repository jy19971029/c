#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
typedef   unsigned int size_t;
void swap(char*buff1, char*buff2, size_t k)
{
	size_t i = 0;
	for (i = 0; i < k; i++)
	{
		char temp = *buff1;
		*buff1 = *buff2;
		*buff2 = temp;
		buff1++;
		buff2++;
	}
}

void bubble_sort(void*base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
				swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
		}
	}
}



//int int_sort(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 10, 1, 2, 32, 4, 5, 63, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), int_sort);
//	return 0;
//}

//int struct_sort(const void*e1, const void*e2)
//{
//	return ((struct stu*)e1)->age -( (struct stu*)e2)->age;
//}
struct stu
{
	char name[20];
	int age;
};

int struct_sort(const void*e1, const void*e2)
{
	return strcmp((*(struct stu*)e1).name, (*(struct stu*)e2).name);
}
int main()
{
	struct stu arr[] = { { "jiangye", 24 }, { "wuchunxue", 25 }, { "liusanxia", 23 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), struct_sort);
	return 0;
}