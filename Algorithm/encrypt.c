//�Í����v���O����
#include<stdio.h>
main()
{
	char s[99];
	int i;
	printf("���������͂��Ă�������\n");
	scanf("%s", &s);
	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] +1;
	}
	printf("�Í����������\n%s\n", s);
}