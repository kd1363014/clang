#include<stdio.h>
main()
{
	int a;
	printf("０から１００までの整数？");
	scanf("%d", &a);
	if (90 <= a)
	{
		printf("その値の判定結果は「５」です\n");
	}
	else
	{
		if (80 <= a && 90 > a)
		{
			printf("その値の判定結果は「４」です\n");
		}
		else
		{
			if (50 <=a && 80 > a)
			{
				printf("その値の判定結果は「３」です\n");
			}
			else
			{
				if (30 <=a && 50 > a)
				{
					printf("その値の判定結果は「２」です\n");
				}
				else
				{
					printf("その値の判定結果は「１」です\n");
				}
			}
		}
	}
}