#include<stdio.h>
main()
{
	int a,b;
	char c;
	printf("�����P�H");
	scanf("%d", &a);
	printf("�����Q�H");
	scanf("%d", &b);
	printf("���Z�q�H");
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
			printf("0�ŏ��Z�͂ł��܂���");
		}
		else
		{
			printf("%d/%d=%d\n", a, b, a / b);
		}
		break;
	case'%':
		if (b == 0)
		{
			printf("0�ŏ��Z�͂ł��܂���");
		}
		else
		{
			printf("%d/%d�̗]���%d�ł�\n", a, b, a % b);
		}

		   break;
	default:printf("���Z�q����͂��Ă�������");
	}
}