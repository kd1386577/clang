#include<stdio.h>

struct profilo
{

	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profilo data;
	struct profilo* p;
	p = &data;
	printf("���O�����");
	scanf("%s", p->name);


	printf("���N���������");
	scanf("%d%d%d\n", &p->birth[0], &p->birth[1], &p->birth[2]);

	printf("���t�^�����");
	scanf("%s\n", &p->blood);

	printf("%s--", p -> blood);
	printf("%d�N%d��%d����\n", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("���t�^--%s\n",p->blood);
}