#include<stdio.h>
main()
{
	int f;
	float  box[3],g=0.0;
	for (f = 0, f < 3, f++) {
		printf("���������");
		scanf("%f", &box[f]);
	}
	for (f = 0, f < 3; f++) {
		g += box[f];

	}
	printf("���v%.2f\n", g);
	printf("����%.2f\n", g / 3.0);
}