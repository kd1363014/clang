#include<stdio.h>
main()
{
	char a;
	printf("1文字入力？ ");
	scanf("%c", &a);
	if (0x41 <= a && 0x5a >= a)
	{
		a += 32;
		printf("変換結果は %c\n", a);
	}
	else
	{
		if (0x61 <= a && 0x7a >= a)
		{
			a -= 32;
			printf("変換結果は %c\n",a);
		}
		else
		{
			printf("入力結果は%c\n", a);
		}
	}
}