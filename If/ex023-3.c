#include<stdio.h>
main()
{
	int n, l, m;
	printf("‰‰Zq‚ğ“ü—Í: ");
	scanf("%d", &n);
	printf("2‚Â‚Ì®”‚ğ“ü—Í: ");
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


					
