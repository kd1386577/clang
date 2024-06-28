#include<stdio.h>
main()
{
	char k[99];
	int s[99];
	int i;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s",s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚Ì•¡‡‰»ƒL[>");
		scanf("%d", &k[i]);
		s[i] = s[i] -= k[i];

	}
	printf("•¡‡‰»Ï‚İ•¶š—ñ‚Í%s", i);
}