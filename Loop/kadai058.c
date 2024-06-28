#include<stdio.h>
main()
{
	int i;
	char a;
	for (a = 0x20,i=1; a <= '~'; a++,i++)
	{
		printf("%X %c", a, a);
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
}