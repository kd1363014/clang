#include<stdio.h>
main()
{
	int s;
	printf("��������: ");
	scanf("%d", &s);
	if (s % 4 == 0 && s%100!=0 || s%400==0 ) {
		printf("���邤�N�ł�");
	}
	else {
		printf("���N�ł�");
	}
}
