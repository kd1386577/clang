#include<stdio.h>
int main(void)
{
	char en;
	int s1, s2,a;
	printf("®”1H\n");
	scanf("%d",&s1);

	printf("®”‚QH\n");
	scanf("%d", &s2);
	scanf("%c", &en);

	printf("‰‰Zq?\n");
	scanf("%c", &en);
	printf("%d%c%d=", s1, en, s2);
		switch (en)
		{
		case'+':
			a = s1 + s2;
			break;
		case'-':
			a = s1 - s2;
			break;
		case'*':
			a = s1 * s2;
			break;
		case'/':
			a = s1 / s2;
			break;
		case'%':
			a = s1 % s2;
			break;

		
		}
		printf("%d\n", a);

		return 0;
	}