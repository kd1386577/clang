#include<stdio.h>
struct syohin_data
{
	char name[20];//���O
	int tanka;	 //�P��

};
//�֐��v���g�^�C�v�錾
void display1(int a);
void display2(struct syohin_data syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "�P�V�S��",50 };
	display1(a);
	display2(syohin);

}

void display1(int a)
{
	printf("%d\n", a);
}
void display2(struct syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n", syohin.name, syohin.tanka);

}