#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	int flag = 1;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i < sz - 1-j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1, 34, 2, 67, 78, 34, 500, 4999, 1000, 12, 234 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}




//#include<stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while (left <= right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[9] = {2,3,5,56,77,44,22,66,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*init(arr, sz);
//	print(arr, sz);*/
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}



void exchange(int arr1[], int arr2[], int sz)
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < sz;i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}