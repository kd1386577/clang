#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int p, c;
	printf("�����o���܂���\n(1:�O�[2:�`���L3:�p�[\n");
	scanf("%d", &p);
	switch (p)
	{
	case 0:
		printf("\n�v���C���[�́A�O�[�ł��B\n");
		break;
	case 1:
		printf("\n�v���C���[�́A�`���L�ł��B\n");
		break;
	case 2:
		printf("\n�v���C���[�́A�p�[�ł��B\n");
		break;
	}
	switch (c)
	{
	case 0:
	   printf("\n�R���s���[�^�[�́A�O�[�ł��B\n");
		break;
	case 1:
		printf("\n�R���s���[�^�[�́A�`���L�ł��B\n");
		break;
	case 2:
		printf("\n�R���s���[�^�[�́A�p�[�ł��B\n");
		break;
	}
	switch (((p - 1) - c + 3) % 3)
	{
	case 0:
		printf("�������ł��B\n");
		break;
	case 1:
		printf("\n�R���s���[�^�[�̏����ł��B\n");
		break;
	case 2:
		printf("\n�v���C���[�̏����ł��B\n");
		break;
	}
}
