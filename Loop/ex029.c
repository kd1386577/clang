#include<stdio.h>
main()
{
	int  wa;

	printf("数を入れて");
	scanf("%d", &wa);
	while (wa>0 ) {
		printf("*");
		wa--;
	}
}