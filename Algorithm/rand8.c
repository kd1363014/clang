#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a=0, b, i;
	srand(time(0));
	rand();
	b = rand() % 1000 + 1;
	printf("１〜１０００のなかで当たりの数を予想してください\n");
	for (i = 1; a != b; i++) {
		printf("当たりの数は？-＞");
		scanf("%d", &a);
		if (a == b) {
			printf("\n正解！！%d回目で当たりました\n", i);
		}
		else {
			if (a < b) {
				printf("当たりの数より小さいです\n");
			}
			else{
				printf("当たりの数より大きいです\n");
			}
		}
		
	}
}