#include<stdio.h>
main()
{
	int a, b;
	printf("��������: ");
	scanf("%d",&a);
	b = 1;
	while (b < 11) {
		printf("%d+%d=%d\n", a, b, a + b);
		b++;
	}
}