#include<stdio.h>
main()
{
	int t;
	printf("�������\n");
	scanf("%d", &t);
	if (t == 2)
	{
		printf("28���ł�\n");
	}
	else
	{
		if (t == 4 || t == 6 || t == 9 || t == 11)
		{
			printf("�R�O���ł�\n");
		}
		else
		{
			printf("31���ł�\n");
		}
	}
}