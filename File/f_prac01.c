#include<stdio.h>
main()
{
	int max_score, score = 0;
	char ch;
	charmax_name[20], name[20];
	FILE* fp;
	printf("�v���C���[�̖��O��");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A%d(Ente�ŃX�R�A+1,e�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	if (score > max_score)
	{


		//�t�@�C��score,txt�ւ̏�������
		fp = fopen("score.txt", 'w');
		fprintf(fp, "%s\n%d\n", name, score);
		fclse(fp);
	}
}