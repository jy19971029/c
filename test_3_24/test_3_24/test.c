#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<ctype.h>
//enum State
//{
//	invalid,
//	valid
//};
//
//int my_atoi(char*str)
//{
//	enum State state = invalid;
//	int flag = 1;
//	long long ret = 0;
//	while (isspace(*str))
//	{
//		str++;
//	}
//	if (*str == 0)
//		return 0;
//	if (*str == '+')
//		str++;
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag*(*str-48);
//		if (ret> 2147483647 || ret<-2147483648)
//			return 0;
//		str++;
//	}
//	if (*str == 0)
//	{
//		state = valid;
//		return (int)ret;
//	}
//	else
//	{
//		return (int)ret;
//	}
//}
//int main()
//{
//	char str[] = "    -123453535.55";
//	printf("%d\n",my_atoi(str));
//	return 0;
//}