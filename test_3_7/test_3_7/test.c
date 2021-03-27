#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int count = 1;
//		while (i / 10)
//		{
//			count++;
//			i = i / 10;
//		}
//		i = tmp;
//		
//		int sum = 0;
//		while (1)
//		{
//			int num = 1;
//			int k = i / 10;
//			int q = i % 10;
//			i = k;
//			for (j = 0; j < count; j++)
//			{
//				num *= q;
//			}	
//			sum += num;
//			if (k == 0)
//				break;
//		}
//		i = tmp;
//		if (i == sum)
//			printf("%d\n",i);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int k = (int)pow(10,2);
//	printf("%d",k);
//	return 0;
//}

//int main()
//{
//	char arr[13] = {0};
//	int i = 0;
//	int left = 6;
//	int right = 6;
//	int j = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		
//		arr[left] = '*';
//		arr[right] = '*';	
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//		left--;
//		right++;
//	}
//	left = 0;
//	right = 12;
//	while (left <= right)
//	{
//		arr[left] = ' ';
//		arr[right] = ' ';
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//		left++;
//		right--;
//	}
//
//	return 0;
//}


//int main()
//{
//	int M = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &M);
//	total = M;
//	empty = M;
//	while (empty > 1)
//	{
//		total += empty/2;
//		empty = empty / 2 + empty % 2;;
//		
//	}
//	printf("%d\n",total);
//	return 0;
//}



//int main()
//{
//	char arr[4] = "abc";
//	char brr[] = "qqqqqqqqqqqqq";
//	strcpy(brr,arr);
//	printf("%s\n", brr);
//	return 0;
//}

//char* my_strcpy(char*dest, const char *srt)
//{
//	assert(dest != NULL);
//	assert(srt != NULL);
//	char* ret = dest;
//	while (*dest++ = *srt++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "qqqqqqqqqqqqqqqqqqqqqqq";
//	char arr2[] = "jiangye loves wuchunxue";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}



//int my_strlen(char* arr)
//{
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "jiangye loves wuchunxue";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}




void swap(int arr[], int i)
{
	int left = 0;
	int right = i-1;
	int tmp = 0;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 10, 2, 23, 56, 77, 78, 45, 3, 97, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]) ;
	swap(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{	
		printf("%d ", arr[i]);
	}

	return 0;
}