#include<stdio.h>
main()
{
	int a, b,c;
	printf("���́H");
	scanf("%d", &a);
	for ( c= 0, b = 0; a != -999; b++) {
		c += a;
		printf("���́H");
		scanf("%d", &a);
	}
	printf("���v=%d%t����=%.2f", c, (float)c/ b);
}
