#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[99];
	int k[99];
	int i, n;
	srand(time(0));
	rand();
	printf("文字を入力しろ");
	scanf("%s", &s);
	i = 0;
	for (i = 0; s[i] != '\0';i++)
	{
		//乱数を求める
		k[i] = rand() % 6;
		//求めた乱数で暗号化
		s[i] = s[i] += k[i];
	}
	printf("暗号化文字列は\n%s\n", s);
	printf("暗号キーは");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
	

}