#include<stdio.h>
main()
{
	int y;
	printf("��������");
	scanf("%d",y);

	if (y & 4 == 0 && y % 100 != 0||y%400==0)
	{
		printf("���邤�N\n");
	}else
	{
		printf("�����ł�\n");
	}
}