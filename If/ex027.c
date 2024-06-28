#include<stdio.h>
main()
{
	int y;
	printf("¼—ï‚ğ“ü—Í");
	scanf("%d",y);

	if (y & 4 == 0 && y % 100 != 0||y%400==0)
	{
		printf("‚¤‚é‚¤”N\n");
	}else
	{
		printf("•½¬‚Å‚·\n");
	}
}