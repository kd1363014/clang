#include<stdio.h>
main()
{
	char a;
	printf("���������: ");
	scanf("%c", &a);
	if (0x41 <= a) {
		if (0x5a >= a) {
			printf("�啶���ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
	else {
		printf("���̑��̕����ł�");
	}
}