#include<stdio.h>
main()
{
	char a;
	printf("文字を入力: ");
	scanf("%c", &a);
	if (0x30 <= a) {
		if (0x39 >= a) {
			printf("数字です");
		}
		else {
			if (0x41 <= a) {
				if (0x5A >= a) {
					printf("アルファベットです");
				}
				else {
					if (0x61 <= a) {
						if (0x7A >= a) {
							printf("アルファベットです");
						}
						else {
							printf("その他の文字です");
						}
					}
					else {
						printf("その他の文字です");
					}

					
				}
			}
			else {
				printf("その他の文字です");
			}
		}
	}
	else {
		printf("その他の文字です");
	}
}