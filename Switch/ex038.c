#include<stdio.h>
main()
{
	int s;
	printf("���������");
	scanf("%d", & s);
	switch (s/10) {
		
		case 1:
			printf("10�V��");
			break;

			case 2:
				printf("20�V��");
				break;

				case 3:
					printf("30�V��");
					break;

					case 4:
					printf("40�V��");
					break;
					default:
						printf("�G���[�\��");
	}
}