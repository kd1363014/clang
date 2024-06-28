#include<stdio.h>
main()
{
	int a, b;
	printf("”‚ğ“ü‚ê‚Ä: ");
	scanf("%d",&a);
	b = 1;
	while (b < 11) {
		printf("%d+%d=%d\n", a, b, a + b);
		b++;
	}
}