#include<stdio.h>
main()
{
	int a, b;
	while (1)
	{
		printf("�����P(-999�ŏI��)�H");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		
		printf("�����Q(-999�ŏI��)�H");
		scanf("%d", &b);
		if (b == -999)
		{
			break;
		}
		if (b == 0)
		{
			continue;
		}
		printf("%d/%d=%d���܂�%d\n\n", a, b, a / b, a % b);
	}
}