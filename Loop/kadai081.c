#include<stdio.h>
main()
{
	int a,sum=0,i=0;
	printf("整数(-999で終了)？");
	scanf("%d", &a);
	while (1)
	{
		i++;
		sum += a;
		printf("整数(-999で終了)？");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
	}
	printf("合計=%d\n平均=%.3f\n", sum, sum / (float)i);
}