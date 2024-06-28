#include<stdio.h>
main()
{
	int f;
	float  box[3],g=0.0;
	for (f = 0, f < 3, f++) {
		printf("ŽÀ”‚ð“ü—Í");
		scanf("%f", &box[f]);
	}
	for (f = 0, f < 3; f++) {
		g += box[f];

	}
	printf("‡Œv%.2f\n", g);
	printf("•½‹Ï%.2f\n", g / 3.0);
}