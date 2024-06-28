#include<stdio.h>
main()
{
	int s;
	printf("整数を入力");
	scanf("%d", & s);
	switch (s/10) {
		
		case 1:
			printf("10天台");
			break;

			case 2:
				printf("20天台");
				break;

				case 3:
					printf("30天台");
					break;

					case 4:
					printf("40天台");
					break;
					default:
						printf("エラー表示");
	}
}