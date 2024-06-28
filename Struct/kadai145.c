#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit data[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0} };
	struct fruit* p = data;
	int i, j,sum=0;
		for (j = 0; j < 3; j++,p++)
		{
			printf("¤•i–¼:    %s\n‰¿Ši:    %d‰~\t‚¨‘E‚ß“x:\t", p->name, p->price);
			for (i = 0; i < p->point; i++)
			{
				printf("š ");
				
			}
			if (p->point < 5)
			{
				printf("™");
			}
			printf("\nŒÂ”:    %dŒÂ\t‹àŠz:\t\t%d-\n\n\n", p->number, p->price * p->number);
			sum += (p->price * p->number);
		}
		printf("‡Œv‹àŠz%d-\n", sum);
}