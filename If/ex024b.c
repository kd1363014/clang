//�����o�[�W����
#include<stdio.h>
main()
{
	char a;
	printf("���������: ");
	scanf("%c", &a);
	if (0x41<=a && 0x5A>=a) {
		printf("���̕����͑啶���ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
}