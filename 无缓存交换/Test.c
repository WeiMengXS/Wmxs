#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a[] = { 1, 2 };
	printf("����ǰ������Ϊ%d %d\n", a[0],a[1]);
	a[1] = a[1] - a[0];
	a[0] = a[0] + a[1];
	printf("����������Ϊ%d %d\n", a[0], a[1]);





	return 0;
}