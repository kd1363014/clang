#include<stdio.h>
main()
{
	char moji1[30], moji2[30],w[30];
	printf("文字列１を入力：");
	scanf("%s", &moji1);
	printf("文字列２を入力：");
	scanf("%s", &moji2);
	printf("\nmoji1=%s  moji2=%s\n", &moji1, moji2);
	printf("入れ替えると\nmojo1=%s  moji2=%s",moji2,moji1);	
}