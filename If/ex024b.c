//改造バージョン
#include<stdio.h>
main()
{
	char a;
	printf("文字を入力: ");
	scanf("%c", &a);
	if (0x41<=a && 0x5A>=a) {
		printf("その文字は大文字です");
	}
	else {
		printf("その他の文字です");
	}
}