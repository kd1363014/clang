#include<stdio.h>
main()
{
	int num;
	printf("���������: ");
	scanf("%d", &num);
	num /= 10;
	switch (num) {
	case 1:printf("10�_��ł�");
		break;
	case 2:printf("20�_��ł�");
		break;
	case 3:printf("30�_��ł�");
		break;
	case 4:printf("40�_��ł�");
		break;
	default:printf("�G���[10�`49�̒l����͂��Ă�������");
	}
}