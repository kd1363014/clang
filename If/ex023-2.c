#include<stdio.h>
main()
{
	int s;
	printf("西暦を入力: ");
	scanf("%d", &s);
	if (s % 4 == 0 && s%100!=0 || s%400==0 ) {
		printf("うるう年です");
	}
	else {
		printf("平年です");
	}
}
