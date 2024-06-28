#include<stdio.h>
main()
{
	int i;
	char s[100];
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 1;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", s);

}