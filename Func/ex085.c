#include<stdio.h>
//�v���g�^�C�v�錾
void Str_Cat(char* s1, char* s2);
main()
{
	
	char a[256], b[256];
	printf("�z��a");
	gets(a);
	printf("�z��b");
	gets(b);

	Str_Cat(a,b);

	printf("�z��%s\n", a);
	
	void Str_Cat(char* s1, char* s2)
	{
		int i, j;
		for (i = 0; *(s1 + i) != '\0'; i++);

	
		for (j = 0; *(s2 + i) != *(s2 + j); i++, j++);
	

	}
}