#include<stdio.h>
#define DATA_END -1

struct ken
{
	int cobe;
	char name[20];
	struct ken *next;
};

main()
{
	struct ken ken_data[] = {{1,"�k�C��",NULL},{2,"�X��",NULL},{3,"��茧",NULL},{4,"�{�錧",NULL},{5,"�H�c��",NULL},{6,"�R�`��",NULL},{7,"������",NULL},{DATA_END,"",NULL}};
	
	struct ken * p, * wp;
	
	p = wp = ken_data;
	
	do 
	{
		p++;
		wp = p;

	} while (p->cobe != DATA_END);
	
	for (p = ken_data; p->cobe != DATA_END; p = p->next)
	{
		printf("cobe=%d name=%s\n", p->cobe, p->name);
	}
}