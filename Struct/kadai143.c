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
	printf("���i��:%s\n���i%d�~\n���E�ߓx:", data.name, data.price);
	for (i = 0; i < data.point; i++)
	{
		printf("�� ");
	}
	printf("\n��:%d��\n���z:��%d-\n", data.number, data.price * data.number);
}