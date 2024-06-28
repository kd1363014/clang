#include<stdio.h>
main()
{
	int a, b;
	printf("”‚ÍH");
	scanf("%d", &a);
	do {
		for (b = 0; b < 5; b++) {
			printf("*");
		}
		printf("\n");
		a--;
	} while (a > 0);
}