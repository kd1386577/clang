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
	printf("–¼‘O‚ð“ü—Í");
	scanf("%s", p->name);


	printf("¶”NŒŽ“ú‚ð“ü—Í");
	scanf("%d%d%d\n", &p->birth[0], &p->birth[1], &p->birth[2]);

	printf("ŒŒ‰tŒ^‚ð“ü—Í");
	scanf("%s\n", &p->blood);

	printf("%s--", p -> blood);
	printf("%d”N%dŒŽ%d“ú¶\n", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("ŒŒ‰tŒ^--%s\n",p->blood);
}