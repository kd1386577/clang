#include<stdio.h>
main()
{
	int g, i;
	for (g = 0, i = 1; i < 10; i++)
	{
		g += i;
		printf("1から%dまでの和=%d\n", i, g);
	}
}