#include<stdio.h>
main()
{
	int a;
	char b;
	printf("１０進数の数字？");
	scanf("%d", &a);
	getchar();
	printf("アルファベット(o or h or d)？");
	scanf("%c",&b);
	switch (b)
	{
	case'o':printf("%o\n", a);
		break;
	case'O':printf("%o\n", a);
		break;
	case'h':printf("%x\n", a);
		break;
	case'H':printf("%x\n", a);
		break;
	default:printf("%d\n", a);
	}
}