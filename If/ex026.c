#include<stdio.h>
main()
{
	int t;
	printf("月を入力\n");
	scanf("%d", &t);
	if (t == 2)
	{
		printf("28日です\n");
	}
	else
	{
		if (t == 4 || t == 6 || t == 9 || t == 11)
		{
			printf("３０日です\n");
		}
		else
		{
			printf("31日です\n");
		}
	}
}