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
	printf("��������͂���");
	scanf("%s", &s);
	i = 0;
	for (i = 0; s[i] != '\0';i++)
	{
		//���������߂�
		k[i] = rand() % 6;
		//���߂������ňÍ���
		s[i] = s[i] += k[i];
	}
	printf("�Í����������\n%s\n", s);
	printf("�Í��L�[��");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
	

}