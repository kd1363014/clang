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
			printf("���i��:    %s\n���i:    %d�~\t���E�ߓx:\t", p->name, p->price);
			for (i = 0; i < p->point; i++)
			{
				printf("�� ");
				
			}
			if (p->point < 5)
			{
				printf("��");
			}
			printf("\n��:    %d��\t���z:\t\t��%d-\n\n\n", p->number, p->price * p->number);
			sum += (p->price * p->number);
		}
		printf("���v���z����%d-\n", sum);
}