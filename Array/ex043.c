#include<stdio.h>
main()
{
	char deta[6] = "apple";
	int i;
	printf("�P�������\��\n");
	for (i =0; deta[i] != '\0'; i++)
	{
		printf("%c\n", deta[i]);

	}

	printf("\n�������\��\n");
	printf("%s\n", &deta[2]);
}