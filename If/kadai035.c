#include<stdio.h>
main()
{
	int a;
	printf("�����H");
	scanf("%d", &a);
	if (a == 0)
	{
		printf("���͒l��0�ł�\n");
	}
	else
	{
		if (1 <= a)
		{
			printf("���͒l�́u�v���X�v�ł�\n");
		}
		else
		{
			if (0 > a)
			{
				printf("���͒l�́u�}�C�i�X�v�ł�\n");
			}
			
		}
	}
}