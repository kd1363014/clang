#include<stdio.h>
main()
{
	int a,b;
	char c;
	printf("整数１？");
	scanf("%d", &a);
	printf("整数２？");
	scanf("%d", &b);
	printf("演算子？");
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
			printf("0で除算はできません");
		}
		else
		{
			printf("%d/%d=%d\n", a, b, a / b);
		}
		break;
	case'%':
		if (b == 0)
		{
			printf("0で除算はできません");
		}
		else
		{
			printf("%d/%dの余りは%dです\n", a, b, a % b);
		}

		   break;
	default:printf("演算子を入力してください");
	}
}