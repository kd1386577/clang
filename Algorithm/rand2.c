#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;
	srand(time(0));
	rand();
	kazu = rand() % 301-100;
	printf("������%d�ł�\n", kazu);
}