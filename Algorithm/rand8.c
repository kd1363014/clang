#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a=0, b, i;
	srand(time(0));
	rand();
	b = rand() % 1000 + 1;
	printf("‚P`‚P‚O‚O‚O‚Ì‚È‚©‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	for (i = 1; a != b; i++) {
		printf("“–‚½‚è‚Ì”‚ÍH-„");
		scanf("%d", &a);
		if (a == b) {
			printf("\n³‰ğII%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", i);
		}
		else {
			if (a < b) {
				printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
			}
			else{
				printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
			}
		}
		
	}
}