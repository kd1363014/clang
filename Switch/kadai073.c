#include<stdio.h>
main()
{
	int a;
	char b;
	printf("�P�O�i���̐����H");
	scanf("%d", &a);
	getchar();
	printf("�A���t�@�x�b�g(o or h or d)�H");
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