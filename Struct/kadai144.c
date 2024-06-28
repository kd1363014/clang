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
	struct fruit* p=&data;
	int i;
	printf("¤•i–¼:%s\n‰¿Ši%d‰~\n‚¨‘E‚ß“x:", p->name, p->price);
	printf("%dƒ|ƒCƒ“ƒg",p->point);
	printf("\nŒÂ”:%dŒÂ\n‹àŠz:%d-\n", p->number, p->price * p->number);
}