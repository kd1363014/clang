#include<stdio.h>
main()
{
	int c[10];
	int	i, a, j;
	for (i = 0; i < 10; i++)
	{
		a = 0;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		c[i] = a;

	}
	printf("�z��c��");
	for (j = 0; j < i; j++)
	{
		printf("%d ", c[j]);
	}
	
}