#include<stdio.h>
main()
{
	float box[3], g;
	int i;
	g = 0;
	for (i = 0;i <= 2; i++) {
		printf("実数を入力: ");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("合計は %.2f です\n平均は %.2fです", g, g/3.0);
}