#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int p, c;
	printf("何を出しますか\n(1:グー2:チョキ3:パー\n");
	scanf("%d", &p);
	switch (p)
	{
	case 0:
		printf("\nプレイヤーは、グーです。\n");
		break;
	case 1:
		printf("\nプレイヤーは、チョキです。\n");
		break;
	case 2:
		printf("\nプレイヤーは、パーです。\n");
		break;
	}
	switch (c)
	{
	case 0:
	   printf("\nコンピューターは、グーです。\n");
		break;
	case 1:
		printf("\nコンピューターは、チョキです。\n");
		break;
	case 2:
		printf("\nコンピューターは、パーです。\n");
		break;
	}
	switch (((p - 1) - c + 3) % 3)
	{
	case 0:
		printf("あいこです。\n");
		break;
	case 1:
		printf("\nコンピューターの勝ちです。\n");
		break;
	case 2:
		printf("\nプレイヤーの勝ちです。\n");
		break;
	}
}
