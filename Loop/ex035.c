#include<stdio.h>
main()
{
	int su, goukei;
	goukei = 0;
	while (1)
	{
		printf("数を入れて");
		scanf("%d" ,&su);
	
		if (su == -999)
		{
			break;
		}

		goukei+= su;
	}
	printf("合計=%d\n", goukei);
}