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
		//printf("プレイヤー１の体力: %d\n\n", playerHP[0]);
		printf("プレイヤー１のターン！（1:通常攻撃２強攻撃３回復４絶対零度＞");
		scanf("%d", &playerCom[0]);

		switch (playerCom[0])
		{
		case 1:printf("通常攻撃！\n");
			playerHP[1] -= rand() % 30 + 1;//敵へのダメージ
			break;
		case 2:printf("強攻撃！！\n");
			playerHP[1] -= rand() % 21 + 40;//敵へのダメージ
			playerHP[0] -= rand() % 20;//自傷ダメージ
			break;
		case 3:printf("回復\n");
			playerHP[0] += rand() % 15 + 1;//回復
			break;
		case 4:
			i = rand () % 100 + 1;
			if (i <= 30) {
				printf("一撃必殺！！\n");
				playerHP[1] -= 100;
			}
			else {
				printf("しかし当たらなかった！！\n");
			}
			break;
			}
		

		if (playerHP[1] <= 0)
		{
			printf("プレイヤー２をたおした");
			break;
		}
		if (playerHP[0] <= 0)
		{
			printf("自滅した！");
			break;
		}

		printf("プレイヤー１の体力: %d\n", playerHP[0]);
		printf("プレイヤー２の体力: %d\n\n", playerHP[1]);
		printf("========================================\n\n");

		printf("プレイヤー２のターン！（1:通常攻撃２強攻撃３回復４絶対零度＞");
		scanf("%d", &playerCom[1]);

		switch (playerCom[1])
		{
		case 1:printf("通常攻撃！\n");
			playerHP[0] -= rand() % 30 + 1;//敵へのダメージ
			break;
		case 2:printf("強攻撃！！\n");
			playerHP[0] -= rand() % 21 + 40;//敵へのダメージ
			playerHP[1] -= rand() % 20;//自傷ダメージ
			break;
		case 3:printf("回復\n");
			playerHP[1] += rand() % 20 + 1;//回復
			break;
		case 4:
			i = rand() % 100 + 1;
			if (i <= 30) {
				printf("一撃必殺！！\n");
				playerHP[0] -= 100;
			}
			else {
				printf("しかし当たらなかった！！\n");
			}
			break;
		}
		if (playerHP[0] <= 0)
		{
			printf("プレイヤー１を倒した！");
			break;
		}
		if (playerHP[1] <= 0)
		{
			printf("自滅した！");
			break;
		}
		printf("プレイヤー１の体力 : %d\n", playerHP[0]);		printf("プレイヤー２の体力 : %d\n\n", playerHP[1]);		printf("==============================================\n\n");
	}
}