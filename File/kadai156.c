#include<stdio.h>
#define DATA_END -1

struct animal
{
	int no;
	char name[99];
	struct color[99];
};
main()
{
	struct animal data[60] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} }, * P_data = animaldata;
	
	int i;
	printf("1:�f�[�^�\���@�Q:�f�[�^�̒ǉ��@�R:�f�[�^�����@�����́H\n�f�[�^�̒ǉ����s���܂��̂œ��͂��Ă�������");
	for (i = 0; i < 3; i++)
	{
		printf("�ԍ���%4d\t", data[i].no);
		printf("���O��%s\t", data[i]name);
		printf("�F��%s\n", data[i]color);

	}


}