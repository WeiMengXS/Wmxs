/*
4.编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子:
1999 2299
输出例子:7
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Notnumber(int a, int b)
{
	int num;
	int count = 0;
	int i = 0;
	num = a^b;
	for (; i < 32; i++)
	{
		if ((num >> i) & 1)
			count++;
	
	}
	return count;
}
int main()
{

	int a=1999, b=2999;
	int i = 0;
	int count=0;
	

	printf("%d", Notnumber(a, b));
	return 0;
}