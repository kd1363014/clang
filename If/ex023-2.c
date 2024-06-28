#include<stdio.h>
main()
{
	int s;
	printf("¼—ï‚ğ“ü—Í: ");
	scanf("%d", &s);
	if (s % 4 == 0 && s%100!=0 || s%400==0 ) {
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else {
		printf("•½”N‚Å‚·");
	}
}
