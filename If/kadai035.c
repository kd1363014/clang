#include<stdio.h>
main()
{
	int a;
	printf("整数？");
	scanf("%d", &a);
	if (a == 0)
	{
		printf("入力値は0です\n");
	}
	else
	{
		if (1 <= a)
		{
			printf("入力値は「プラス」です\n");
		}
		else
		{
			if (0 > a)
			{
				printf("入力値は「マイナス」です\n");
			}
			
		}
	}
}