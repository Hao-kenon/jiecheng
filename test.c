#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//Ñ­»·
int Facl(n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret; 
}


//µÝ¹é
int Fac2(n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n-1);  
}


//int main()
//{
//	//Çón½×³Ë
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//ì³²¨ÄÇÆõÊýÁÐ
//1 1 2 3 5 8 13 21 34 ......


//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//} 


int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}