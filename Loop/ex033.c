#include<stdio.h>
main()
{
	int a, b,c;
	printf("”‚ÍH");
	scanf("%d", &a);
	for ( c= 0, b = 0; a != -999; b++) {
		c += a;
		printf("”‚ÍH");
		scanf("%d", &a);
	}
	printf("‡Œv=%d%t•½‹Ï=%.2f", c, (float)c/ b);
}
