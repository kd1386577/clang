#include<stdio.h>
main()
{
	char deta[6] = "apple";
	int i;
	printf("１文字ずつ表示\n");
	for (i =0; deta[i] != '\0'; i++)
	{
		printf("%c\n", deta[i]);

	}

	printf("\n文字列を表示\n");
	printf("%s\n", &deta[2]);
}