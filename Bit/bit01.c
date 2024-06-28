#include<stdio.h>
#include<string.h>
enum Bitstate
{
	Base = 0,			//00000000 通常状態
	Poison = 1 << 0,	//00000001 どく状態
	Sleep = 1 << 1,		//00000010 ねむり状態
	Paralysis = 1 << 2,	//00000100まひ状態
	Burn = 1 << 3,		//00001000やけど状態
	AtkUp = 1 << 5,		//00010000攻撃力アップ状態
	AtkDown = 1 << 5	//00100000攻撃力ダウン状態
};

typedef unsigned int UINT;

void DisplayStatus(UINT s);

void ChangeFlag(UINT* s);

void ClearFlg(UINT* s);


main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlg(&MyState);
	DisplayStatus(MyState);

	


}
void DisplayStatus(UINT s)
{
	printf("*****現在の状態*****\n");
	if (s & Poison)
	{
		printf("どく\n");
	}
	if (s & Sleep)
	{
		printf("ねむり\n");
	}
	if (s & Paralysis)
	{
		printf("まひ\n");
	}
	if (s & Burn)
	{
		printf("やけど\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	printf("*********************\n");

}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("1:どく 2:ねむり 3:まひ 4:やけど 5:攻撃↑ 6:攻撃↓0:入力終了> ");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		case 0:
			break;
		default:
			break;
		}
	}

}

void ClearFlg(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を回復しますか？\n");
		printf("1:どく 2:ねむり 3:まひ 4:やけど 5:攻撃↑ 6:攻撃↓ 7:状態クリア 0:入力終了> ");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s &= 0;
			break;
		case 0:
			break;
		default:
			break;
		}
	}

}
