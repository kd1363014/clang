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
	printf("���i��:%s\n���i%d�~\n���E�ߓx:", p->name, p->price);
	printf("%d�|�C���g",p->point);
	printf("\n��:%d��\n���z:��%d-\n", p->number, p->price * p->number);
}