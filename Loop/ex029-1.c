#include<stdio.h>
main()
{
	int wa, ia;

	printf("数を入れて");
	scanf("%d", &wa);
	ia = 0;
	while (ia < wa) {
		printf("*");
		ia++;
	}
}