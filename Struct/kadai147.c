#include<stdio.h>

struct animal
{
	int no;
	char name[99];
	struct color[99];
};
main()
{
	struct animal  data[60] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} };
	struct animal*p_data=data;

	int i;
	printf("1:�f�[�^�\���@�Q:�f�[�^�̒ǉ��@�R:�f�[�^�����@�����́H\n�f�[�^�̒ǉ����s���܂��̂œ��͂��Ă�������");
	for (i = 0; i < 3; i++)
	{
		printf("�ԍ���%4d\t",p_data->no);
		printf("���O��%s\t", p_data->name);
		printf("�F��%s\n", p_data->color);
		*p_data++;
	}



}