#include<stdio.h>
main()
{
	float box[3], g;
	int i;
	g = 0;
	for (i = 0;i <= 2; i++) {
		printf("���������: ");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("���v�� %.2f �ł�\n���ς� %.2f�ł�", g, g/3.0);
}