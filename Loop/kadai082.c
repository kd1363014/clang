#include<stdio.h>
main()
{
	int a,sum=0,i=0;

	while (1)
	{
		
		
		printf("����(-999�ŏI��)�H");
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
	printf("���v=%d\n����=%.3f\n", sum, sum / (float)i);
}