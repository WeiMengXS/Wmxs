
/*��ȡһ�������������������е�ż��λ������λ�� 
�ֱ�������������С�*/
#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int num, n;
	scanf("%d",&num);
	printf("��������\n");
	for (n = 31; n >= 0; n-=2)
	{
		printf("%d",(num>>n)&1);

	}
	printf("ż������\n");
	for (n = 30; n >= 0; n-=2)
	{
		printf("%d", (num >> n) & 1);

	}
	return 0;
}

