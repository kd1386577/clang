#include<stdio.h>
main()
{
	int a=100, b=200, k;
	int* p_a=&a, * p_b=&b;
	printf("実行前a=%d\tb=%d\n", a, b);
	k = *p_a;
	*p_a = *p_b;
	*p_b = k;
	
	printf("実行後a=%d\tb=%d\n", a, b);
}