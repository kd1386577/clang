#include<stdio.h>


main()
{
	int i, s;
	int data[11] = { 10.5,30,77,16,3,47,29,37,33,55 };

	printf("’Tõ’l‚ð“ü—Í");
	scanf("%d",&s);
	data[10]=s;

	for (i = 0; s!=data[10]; i++);
	{
		

	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½", i);
	}

}