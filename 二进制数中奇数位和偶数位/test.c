
/*获取一个数二进制序列中所有的偶数位和奇数位， 
分别输出二进制序列。*/
#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int num, n;
	scanf("%d",&num);
	printf("奇数序列\n");
	for (n = 31; n >= 0; n-=2)
	{
		printf("%d",(num>>n)&1);

	}
	printf("偶数序列\n");
	for (n = 30; n >= 0; n-=2)
	{
		printf("%d", (num >> n) & 1);

	}
	return 0;
}

