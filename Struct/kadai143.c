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
	struct fruit data = { "peach",300,5,3,0 };
	int i;
	printf("¤•i–¼:%s\n‰¿Ši%d‰~\n‚¨‘E‚ß“x:", data.name, data.price);
	for (i = 0; i < data.point; i++)
	{
		printf("š ");
	}
	printf("\nŒÂ”:%dŒÂ\n‹àŠz:%d-\n", data.number, data.price * data.number);
}