#include<stdio.h>
main()
{
	int i,j;
	printf("    1  2  3  4  5  6  7  8  9\n\n================================\n\n");
	for (i = 1; i <= 9; i++)
	{
		printf("%d |",i);
		for (j = 1; j <= 9; j++)
		{
			printf("%2d ", i * j);
		}
		printf("\n");
	}
}