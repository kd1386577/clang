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
	printf("名前を入力");
	scanf("%s", p->name);


	printf("生年月日を入力");
	scanf("%d%d%d\n", &p->birth[0], &p->birth[1], &p->birth[2]);

	printf("血液型を入力");
	scanf("%s\n", &p->blood);

	printf("%s--", p -> blood);
	printf("%d年%d月%d日生\n", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("血液型--%s\n",p->blood);
}