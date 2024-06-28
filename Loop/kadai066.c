#include<stdio.h>
main()
{
	int i=1,sum=0;
	do {
		printf("%d+", i);
		sum += i;
		i++;
		

	} while (sum <= 300);
	printf("\b=%d\n", sum);
}