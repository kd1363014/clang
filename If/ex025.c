#include<stdio.h>
main()
{
	char a;
	printf("���������: ");
	scanf("%c", &a);
	if (0x30 <= a) {
		if (0x39 >= a) {
			printf("�����ł�");
		}
		else {
			if (0x41 <= a) {
				if (0x5A >= a) {
					printf("�A���t�@�x�b�g�ł�");
				}
				else {
					if (0x61 <= a) {
						if (0x7A >= a) {
							printf("�A���t�@�x�b�g�ł�");
						}
						else {
							printf("���̑��̕����ł�");
						}
					}
					else {
						printf("���̑��̕����ł�");
					}

					
				}
			}
			else {
				printf("���̑��̕����ł�");
			}
		}
	}
	else {
		printf("���̑��̕����ł�");
	}
}