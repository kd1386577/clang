//複合化プログラム
#include<stdio.h>
main()
{
	char s[99];
	int i;
	printf("文字列を入力してください\n");
	scanf("%s", &s);
	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	printf("暗号化文字列は\n%s\n", s);
}