#include<stdio.h>
main()
{
	int y;
	printf("西暦を入力");
	scanf("%d",y);

	if (y & 4 == 0 && y % 100 != 0||y%400==0)
	{
		printf("うるう年\n");
	}else
	{
		printf("平成です\n");
	}
}