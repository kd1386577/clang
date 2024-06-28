#include<stdio.h>
main()
{
	int i,num;

	printf("”‚ÍH");
	scanf("%d",& i);
	
	do {
		num = 0;
		do {
			printf("*");
			i++;
		} while (num<5);
		printf("\n");
		i--;
	} while (i > 0);
}
