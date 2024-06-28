//ˆÃ†‰»ƒvƒƒOƒ‰ƒ€
#include<stdio.h>
main()
{
	char s[99];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%s", &s);
	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] +1;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í\n%s\n", s);
}