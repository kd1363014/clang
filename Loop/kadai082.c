#include<stdio.h>
main()
{
	int a,sum=0,i=0;

	while (1)
	{
		
		
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &a);
		
		
		if (a == -999)
		{
			break;
		}
		if (a < 0)
		{
			continue;
		}
		i++;
		sum += a;
	}
	printf("‡Œv=%d\n•½‹Ï=%.3f\n", sum, sum / (float)i);
}