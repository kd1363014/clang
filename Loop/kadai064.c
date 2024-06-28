#include<stdio.h>
main()
{
	int i = 20;
	while (i >= 1)
	{
		printf("%2d ", i);
		if (i % 11 == 0)
		{
			printf("\n");
		}
		i--;
		
	}
}