#include<stdio.h>
main()
{
	int a, b;
	while (1)
	{
		printf("整数１(-999で終了)？");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		
		printf("整数２(-999で終了)？");
		scanf("%d", &b);
		if (b == -999)
		{
			break;
		}
		if (b == 0)
		{
			continue;
		}
		printf("%d/%d=%dあまり%d\n\n", a, b, a / b, a % b);
	}
}