#include<stdio.h>
main()
{
	int i, s, data[10] = { 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	printf("\n探索値を入力＞");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == data[i])
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("見付からなかった\n");
	}
	else {
		printf("d[%d]にあった",i);
	}
}

