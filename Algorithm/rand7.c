#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int playerHP[2] = { 100,100 };
	int playerCom[2] = {};
	int i;

	srand(time(0));
	rand();

	while (1)
	{
		//printf("�v���C���[�P�̗̑�: %d\n\n", playerHP[0]);
		printf("�v���C���[�P�̃^�[���I�i1:�ʏ�U���Q���U���R�񕜂S��Η�x��");
		scanf("%d", &playerCom[0]);

		switch (playerCom[0])
		{
		case 1:printf("�ʏ�U���I\n");
			playerHP[1] -= rand() % 30 + 1;//�G�ւ̃_���[�W
			break;
		case 2:printf("���U���I�I\n");
			playerHP[1] -= rand() % 21 + 40;//�G�ւ̃_���[�W
			playerHP[0] -= rand() % 20;//�����_���[�W
			break;
		case 3:printf("��\n");
			playerHP[0] += rand() % 15 + 1;//��
			break;
		case 4:
			i = rand () % 100 + 1;
			if (i <= 30) {
				printf("�ꌂ�K�E�I�I\n");
				playerHP[1] -= 100;
			}
			else {
				printf("������������Ȃ������I�I\n");
			}
			break;
			}
		

		if (playerHP[1] <= 0)
		{
			printf("�v���C���[�Q����������");
			break;
		}
		if (playerHP[0] <= 0)
		{
			printf("���ł����I");
			break;
		}

		printf("�v���C���[�P�̗̑�: %d\n", playerHP[0]);
		printf("�v���C���[�Q�̗̑�: %d\n\n", playerHP[1]);
		printf("========================================\n\n");

		printf("�v���C���[�Q�̃^�[���I�i1:�ʏ�U���Q���U���R�񕜂S��Η�x��");
		scanf("%d", &playerCom[1]);

		switch (playerCom[1])
		{
		case 1:printf("�ʏ�U���I\n");
			playerHP[0] -= rand() % 30 + 1;//�G�ւ̃_���[�W
			break;
		case 2:printf("���U���I�I\n");
			playerHP[0] -= rand() % 21 + 40;//�G�ւ̃_���[�W
			playerHP[1] -= rand() % 20;//�����_���[�W
			break;
		case 3:printf("��\n");
			playerHP[1] += rand() % 20 + 1;//��
			break;
		case 4:
			i = rand() % 100 + 1;
			if (i <= 30) {
				printf("�ꌂ�K�E�I�I\n");
				playerHP[0] -= 100;
			}
			else {
				printf("������������Ȃ������I�I\n");
			}
			break;
		}
		if (playerHP[0] <= 0)
		{
			printf("�v���C���[�P��|�����I");
			break;
		}
		if (playerHP[1] <= 0)
		{
			printf("���ł����I");
			break;
		}
		printf("�v���C���[�P�̗̑� : %d\n", playerHP[0]);		printf("�v���C���[�Q�̗̑� : %d\n\n", playerHP[1]);		printf("==============================================\n\n");
	}
}