#include<stdio.h>
main()
{
	char a;
	printf("1•¶š“ü—ÍH ");
	scanf("%c", &a);
	if (0x41 <= a && 0x5a >= a)
	{
		a += 32;
		printf("•ÏŠ·Œ‹‰Ê‚Í %c\n", a);
	}
	else
	{
		if (0x61 <= a && 0x7a >= a)
		{
			a -= 32;
			printf("•ÏŠ·Œ‹‰Ê‚Í %c\n",a);
		}
		else
		{
			printf("“ü—ÍŒ‹‰Ê‚Í%c\n", a);
		}
	}
}