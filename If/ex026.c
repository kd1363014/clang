#include<stdio.h>
main()
{
	int a;
	printf("月を入力: ");
	scanf("%d", &a);
	if (a == 1||a==3||a==5||a ==7| a == 8||a==10||a==12) {
		printf("最終日は31日です");
	}
	else {
		if (a == 4 || a == 6 || a == 9 || a == 11) {
			printf("最終日は30日です");
		}
		else {
			if (a == 2) {
				printf("最終日は28日です");
			}
			else {
				printf("エラー※１～１２の数値を入力してください");
			}
		}
	}
}