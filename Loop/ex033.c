#include<stdio.h>
main()
{
	int a, b,c;
	printf("数は？");
	scanf("%d", &a);
	for ( c= 0, b = 0; a != -999; b++) {
		c += a;
		printf("数は？");
		scanf("%d", &a);
	}
	printf("合計=%d%t平均=%.2f", c, (float)c/ b);
}
