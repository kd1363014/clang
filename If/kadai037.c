#include<stdio.h>
main()
{
	int a;
	printf("�O����P�O�O�܂ł̐����H");
	scanf("%d", &a);
	if (90 <= a)
	{
		printf("���̒l�̔��茋�ʂ́u�T�v�ł�\n");
	}
	else
	{
		if (80 <= a && 90 > a)
		{
			printf("���̒l�̔��茋�ʂ́u�S�v�ł�\n");
		}
		else
		{
			if (50 <=a && 80 > a)
			{
				printf("���̒l�̔��茋�ʂ́u�R�v�ł�\n");
			}
			else
			{
				if (30 <=a && 50 > a)
				{
					printf("���̒l�̔��茋�ʂ́u�Q�v�ł�\n");
				}
				else
				{
					printf("���̒l�̔��茋�ʂ́u�P�v�ł�\n");
				}
			}
		}
	}
}