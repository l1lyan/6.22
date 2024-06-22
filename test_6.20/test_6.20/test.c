#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a > b ? a : b);
//	return 0;
//}

//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 5 == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//	return 0;
//}

//int main()
//{
//	int id = 0;
//	float ch = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//
//	scanf("%d;%f,%f,%f", &id, &ch, &math, &eng);
//	printf("The each subject score of NO. %d is %.2f, %.2f, %.2f.\n", id, ch, math, eng);
//	return 0;
//}

//int main()
//{
//	int a = printf("hello world!");
//	printf("\n%d\n", a);
//	return 0;
//}

//int main()
//{
//	
//	printf("printf(\"hello world!\\n\");\n");
//	printf("cout<<\"hello world!<< endl; \"");
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	float r = 0.0f;
//	scanf("%f", &r);
//	float pi = 3.1415926f;
//	float v = 0.0f;
//	printf("%.3f\n", 4.0 / 3.0 * pi * r * r * r);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	int min = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//				printf("%d %d %d\n", a, b, c);
//			else
//				printf("%d %d %d\n", a, c, b);
//		}
//		else//a>b,c>a
//		{
//			printf("%d %d %d\n", c, a, b);
//		}
//	}
//	else//b>a
//	{
//		if (b > c)
//		{
//			if (a > c)
//				printf("%d %d %d\n", b, a, c);
//			else
//				printf("%d %d %d\n", b, c, a);
//		}
//		else//b>a,c>b
//		{
//			printf("%d %d %d\n", c, b, a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = a > b ? a : b;
//	for (; i > 0; i--)
//	{
//		if ((a % i == 0) && (b % i == 0))
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", j);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	float i = 0.0f;
//	float sum = 0.0f;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + 1.0 / i * flag;
//		flag = -flag;
//	}
//	printf("%f", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<time.h>
//#include<stdlib.h>
//void game()
//{
//	int n = rand() % 100 + 1;
//	int num = 0;
//	while (1)
//	{
//		printf("请输入猜的数字:->");
//		scanf("%d", &num);
//		if (num > n)
//		{
//			printf("猜大了，请继续猜\n");
//		}
//		else if (num < n)
//		{
//			printf("猜小了，请继续猜\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		printf("请选择（1继续游戏，0退出游戏）：");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = 0;
//	int k = 20;
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left >= right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include<math.h>
//int Is_Prime(int n)
//{
//	int flag = 1;
//	int i = 2;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Is_Prime(i);
//	if (ret==1)
//	{
//		printf("%d是素数\n", i);
//	}
//	else
//	{
//		printf("%d不是素数\n", i);
//	}
//	return 0;
//}

//int Is_Run(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 2000;
//	int ret = Is_Run(year);
//	if (ret)
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}

//void Cheng(int r)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= r; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%-2d=%-4d", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int r = 0;
//	scanf("%d", &r);
//	Cheng(r);
//	return 0;
//}

