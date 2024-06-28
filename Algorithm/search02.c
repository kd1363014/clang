#include<stdio.h>
main()
{
	int i, s, d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++) {
		printf("%d ", d[i]);
	}
	printf("\n探索値を入力＞");
	scanf("%d", &s);
	d[10] = s;//番兵仕込み
	i = 0;
	while (s!=d[i])
	{
		i = i + 1;
	}
	if (i >= 10)
	{
		printf("見付からなかった");
	}
	else {
		printf("d[%d]にあった！", i);
	}
}