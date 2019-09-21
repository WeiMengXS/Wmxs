#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("%5d %5d ", a, b);
		a = a + b;
		b = b + a;
	}
	system("pause");
	return 0;
}

