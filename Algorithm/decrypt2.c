#include<stdio.h>
main()
{
	char k[99];
	int s[99];
	int i;

	printf("���������͂��Ă�������");
	scanf("%s",s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̕������L�[>");
		scanf("%d", &k[i]);
		s[i] = s[i] -= k[i];

	}
	printf("�������ςݕ������%s", i);
}