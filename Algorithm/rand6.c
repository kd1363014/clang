#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p = 0,c;
	printf("何をだしますか？\n");
	printf("(1:グー 2:チョキ 3:パー＞ )");
	scanf("%d", &p);

	srand(time(0));
	rand();
	c = rand() % 3;

	switch (p)
	{
	case 1:printf("\nプレイヤーはグーです。\n");
		break;
	case 2:printf("\nプレイヤーはチョキです。\n");
		break;
	case 3:printf("\nプレイヤーはパーです。\n");
		break;
	}
	switch (c)
	{
	case 0:printf("コンピュータはグーです。\n\n");
		break;
	case 1:printf("コンピュータはチョキです。\n\n");
		break;
	case 2:printf("コンピュータはパーです。\n\n");
		break;
	}
	switch (((p - 1) - c + 3) % 3)
	{
	case 0:printf("あいこです。\n");
		break;
	case 1:printf("コンピュータの勝ちです。\n");
		break;
	case 2:printf("プレイヤーの勝ちです。\n");
		break;
	}
}