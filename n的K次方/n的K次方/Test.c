
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cf(int n, int k)
{
	if (k == 0 || n == 1)
		return 1;
	else
	{
		k--;
		return n*cf(n, k);
	}
}


int main()
{
	int k, n;
	printf("shuru n he k");
	scanf("%d%d", &n, &k);
	printf("%d", cf(n, k));




	return 0;
}