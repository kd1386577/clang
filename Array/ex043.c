#include<stdio.h>
main()
{
	char deta[6] = "apple";
	int i;
	printf("‚P•¶Žš‚¸‚Â•\Ž¦\n");
	for (i =0; deta[i] != '\0'; i++)
	{
		printf("%c\n", deta[i]);

	}

	printf("\n•¶Žš—ñ‚ð•\Ž¦\n");
	printf("%s\n", &deta[2]);
}