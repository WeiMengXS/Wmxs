#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int feibolaci(int n)
{
	if (n == 1 || n == 2)

		return 1;

	else
	{
		return feibolaci(n - 1) + feibolaci(n - 2);
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", feibolaci(n));
}
