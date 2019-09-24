#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a[] = { 1, 2 };
	printf("输入前的数组为%d %d\n", a[0],a[1]);
	a[1] = a[1] - a[0];
	a[0] = a[0] + a[1];
	printf("交换的数组为%d %d\n", a[0], a[1]);





	return 0;
}