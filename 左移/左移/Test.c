#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

unsigned int reverse_bit(unsigned int value)
{	unsigned int value1 = 0;	
int i = 0;	
for (i = 0; i < 31; i++)	
{		
	if ((value >> i) & 1)		
	{			value1 = value1 | ((value >> i) & 1);	
	}		
	value1 <<= 1;	
}	
return value1;}
	
int main()
{
	int value = 25;
	int n=reverse_bit(value);
	printf("%u",n);
	return 0;
}