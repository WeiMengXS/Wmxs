/*
4.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
��������:
1999 2299
�������:7
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