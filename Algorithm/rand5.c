#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,j;
	srand(time(0));
	rand();
	for (j = 0; j < 10; j++)
	{

		for (i = 0; i < 10; i++)
		{
			printf("%4d", rand() % 300 + 1);
		}
		printf("\n");
	}
}