#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	rand();
	int i,n,k[100];
	char s[100];
	printf("文字列を入力してください＞");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;//乱数を求める
		s[i] = s[i] + k[i];//求めた乱数で暗号化
	}
	printf("暗号化文字列は、%s\n暗号化キーは、", &s);
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}