#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//void *my_memmove(void *dest, const void *src, size_t count)
//{
//	assert(src&&dest);
//	void*ret = dest;
//	if (src < dest)
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return dest;
//
//}



void *my_memcpy(void *dest, const void *src, size_t count)
{

	assert(src&&dest);
	void*ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return dest;
}






int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[] = { 10, 20, 30, 40, 50, 60};
	my_memcpy(arr1, arr2 + 2, 16);
	return 0;
}