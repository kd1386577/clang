#include<stdio.h>
main()
{
	int a=100, b=200, k;
	int* p_a=&a, * p_b=&b;
	printf("Às‘Oa=%d\tb=%d\n", a, b);
	k = *p_a;
	*p_a = *p_b;
	*p_b = k;
	
	printf("ÀsŒãa=%d\tb=%d\n", a, b);
}