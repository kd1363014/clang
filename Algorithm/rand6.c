#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p = 0,c;
	printf("���������܂����H\n");
	printf("(1:�O�[ 2:�`���L 3:�p�[�� )");
	scanf("%d", &p);

	srand(time(0));
	rand();
	c = rand() % 3;

	switch (p)
	{
	case 1:printf("\n�v���C���[�̓O�[�ł��B\n");
		break;
	case 2:printf("\n�v���C���[�̓`���L�ł��B\n");
		break;
	case 3:printf("\n�v���C���[�̓p�[�ł��B\n");
		break;
	}
	switch (c)
	{
	case 0:printf("�R���s���[�^�̓O�[�ł��B\n\n");
		break;
	case 1:printf("�R���s���[�^�̓`���L�ł��B\n\n");
		break;
	case 2:printf("�R���s���[�^�̓p�[�ł��B\n\n");
		break;
	}
	switch (((p - 1) - c + 3) % 3)
	{
	case 0:printf("�������ł��B\n");
		break;
	case 1:printf("�R���s���[�^�̏����ł��B\n");
		break;
	case 2:printf("�v���C���[�̏����ł��B\n");
		break;
	}
}