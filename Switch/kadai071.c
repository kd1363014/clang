#include<stdio.h>
main()
{
	int a,b;
	char c;
	printf("®”‚PH");
	scanf("%d", &a);
	printf("®”‚QH");
	scanf("%d", &b);
	printf("‰‰ZqH");
	getchar();
	scanf("%c", &c);
	switch (c)
	{
	case'+': printf("%d+%d=%d\n", a, b, a + b);
		break;
	case'-': printf("%d-%d=%d\n", a, b, a - b);
		break;
	case'*': printf("%d*%d=%d\n", a, b, a * b);
		break;
	case'/':
		if (b == 0)
		{
			printf("0‚ÅœZ‚Í‚Å‚«‚Ü‚¹‚ñ");
		}
		else
		{
			printf("%d/%d=%d\n", a, b, a / b);
		}
		break;
	case'%':
		if (b == 0)
		{
			printf("0‚ÅœZ‚Í‚Å‚«‚Ü‚¹‚ñ");
		}
		else
		{
			printf("%d/%d‚Ì—]‚è‚Í%d‚Å‚·\n", a, b, a % b);
		}

		   break;
	default:printf("‰‰Zq‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	}
}