#include<stdio.h>
main()
{
	int a;
	printf("10進数の数値？");
	scanf("%d", &a);
	printf("８進数=%o\t16進数=%X\n", a, a);
}