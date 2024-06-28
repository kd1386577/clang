#include<stdio.h>
main()
{
	int max_score, score = 0;
	char ch;
	charmax_name[20], name[20];
	FILE* fp;
	printf("プレイヤーの名前は");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア%d(Enteでスコア+1,eで終了)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	if (score > max_score)
	{


		//ファイルscore,txtへの書き込み
		fp = fopen("score.txt", 'w');
		fprintf(fp, "%s\n%d\n", name, score);
		fclse(fp);
	}
}