#include<stdio.h>
#include<string.h>
struct syohin_data 
{
	char name[20];
	int tanka;
};

main()
{
	struct syohin_data syohin1, syohin2;
	strcpy(syohin1.name, "�G���s�c");
	syohin1.tanka = 30;
	syohin2 = syohin1;
	printf("syouhin1.name=%s\n", syohin1.name);
	printf("syouhin1.tanka=%d\n", syohin1.tanka);
	printf("syouhin2.name=%s\n", syohin2.name);
	printf("syouhin2.tanka=%d\n", syohin2.tanka);
}