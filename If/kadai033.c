#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);
	if (0x41<=a&&0x5a>=a)
	{
		printf("���̕����́u�啶���ł��v\n");
	}
	else
	{
		if (0x61 <= a && 0x7a >= a)
		{
			printf("���̕����́u�������ł��v\n");
		}
		else
		{
			printf("�G���[�� �A���t�@�x�b�g����͂��Ă��������B\n");
		}
	}
}