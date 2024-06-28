#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[99];
	int k[99];
	int i, n;
	srand(time(0));
	rand();
	printf("•¶š‚ğ“ü—Í‚µ‚ë");
	scanf("%s", &s);
	i = 0;
	for (i = 0; s[i] != '\0';i++)
	{
		//—”‚ğ‹‚ß‚é
		k[i] = rand() % 6;
		//‹‚ß‚½—”‚ÅˆÃ†‰»
		s[i] = s[i] += k[i];
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í\n%s\n", s);
	printf("ˆÃ†ƒL[‚Í");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
	

}