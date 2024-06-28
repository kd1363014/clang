#include<stdio.h>
main()
{//num=a,i=b,j=c
	int a,b,c;
	printf("”‚ÍH");
	scanf("%d", &a);
	b = 0;
	do {
		c = 0;
		do {
			printf(" ");
			c++;
		} while (c < a-b);
		c = 0;
		do {
			printf("*");
			c++;
		} while(c<b+1);
		printf("\n");
		b++;
	} while (b<a);
}