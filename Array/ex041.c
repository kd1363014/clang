#include<stdio.h>
main()
{
	float box[3], g;
	int i;
	g = 0;
	for (i = 0;i <= 2; i++) {
		printf("ŽÀ”‚ð“ü—Í: ");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("‡Œv‚Í %.2f ‚Å‚·\n•½‹Ï‚Í %.2f‚Å‚·", g, g/3.0);
}