#include<stdio.h>
main()
{
	char a;
	printf("文字を入力: ");
	scanf("%c", &a);
	if (0x41 <= a) {
		if (0x5a >= a) {
			printf("大文字です");
		}
		else {
			printf("その他の文字です");
		}
	}
	else {
		printf("その他の文字です");
	}
}