#include<stdio.h>
main()
{
	char a[100];
	int i=0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", a);
	while (a[i])
	{
		putchar(a[i]);
		putchar('\n');
		i++;
	}
}