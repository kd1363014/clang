#include<stdio.h>
main()
{
	int i,j;
	for (i = 1,j=1;i <= 60; i++,j++)
	{
		printf("%2d ",i);
		if (j % 20 == 0)
		{
			printf("\n");
		}
	}

}