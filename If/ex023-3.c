#include<stdio.h>
main()
{
	int n, l, m;
	printf("演算子を入力: ");
	scanf("%d", &n);
	printf("2つの整数を入力: ");
	scanf("%d%d", &l, &m);
	if (n == 1) {
		printf("%d", l + m);
	}
	else {
		if (n == 2) {
			printf("%d", l - m);
		}
		else {
			if (n == 3) {
				printf("%d", l * m);
			}
			else{
				printf("%d", l / m);
			}
		}
	}
}


					
