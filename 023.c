#include<stdio.h>
main()
{
	int s;
	printf("整数を入力");
	scanf("%d" ,&s);
	if (s%2==0) 
	{
		printf("その数は偶数です\n" );

	}
	else {
		printf("その数は奇数です\n");
	}
}