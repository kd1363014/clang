#include<stdio.h>
main()
{
	int i, gokei, j;
	int a[][3] = {
		{10,20,30},
		{1,2,3}
	};
	i = 0;
	for (; i <= 1; i++) {
		gokei = 0;
		for (j = 0; j <= 2; j++) {
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
			gokei += a[i][j];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n\n", i, gokei);
	}
}