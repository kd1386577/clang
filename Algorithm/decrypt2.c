#include<stdio.h>
main()
{
	char k[99];
	int s[99];
	int i;

	printf("文字列を入力してください");
	scanf("%s",s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の複合化キー>");
		scanf("%d", &k[i]);
		s[i] = s[i] -= k[i];

	}
	printf("複合化済み文字列は%s", i);
}