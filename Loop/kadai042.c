#include<stdio.h>
main()
{
	int a=1,sum=0;
	while (sum<=300)
	{
		printf("%d+", a);
		sum += a;
		a++;
		
	}
	printf("\b=%d\n", sum);

}