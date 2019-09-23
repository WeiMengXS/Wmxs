#include <stdio.h>
#include <windows.h>
int FindDiffer(int *a,int len)
{	int i = 0;
int x = 0;	
for (; i < 9;i++)
{		x ^= a[i];
}	
return x;} 
int main()
{	int a[9] = { 1, 1, 2, 2, 3, 3, 4, 4, 5 };
int len = sizeof(a) / sizeof(a[0]);
printf("%d\n", FindDiffer(a, len));
system("pause");	
return 0;}
