#include<stdio.h>
main()
{
	int ia,ib,kotae;
	printf("2つの数値？%d %d");
	printf("\n***25と3の四則演算***\n");
	printf("25+3=%d\n",ia+ib);
	scanf("%d", &kotae);
	printf("25-3=%d\n", ia - ib);
	scanf("%d", &kotae);
	printf("25*3=%d\n", ia * ib);
	scanf("%d", &kotae);
	printf("25/3=%dあまり%d\n", ia / ib,ia%ib);
	scanf("%d", &kotae);

}