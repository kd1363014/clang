#include<stdio.h>
main()
{
	int a,sum=0,i=0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &a);
	while (1)
	{
		i++;
		sum += a;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
	}
	printf("���v=%d\n����=%.3f\n", sum, sum / (float)i);
}