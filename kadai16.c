#include<stdio.h>
main()
{
	int ia, ib,kotae;
	printf("***100と7の四則算***\n");
	ia = 100;
	ib = 7;
	
	printf("100+7=%d\n",kotae=ia+ib);
	printf("100-7=%d\n", kotae = ia - ib);
	printf("100*7=%d\n", kotae = ia * ib);
	printf("100/7=%dあまり%d\n", kotae = ia / ib, ia % ib);
}