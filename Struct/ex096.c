#include<stdio.h>
//#include<string.h>
struct syouhin_data {
	char name[20];
	int tanka;
};
void display1(int a);
void display2(struct syouhin_data syouhin);
void display3(struct syouhin_data*syouhin);
main()
{
	struct syouhin_data syouhin = { "�P�V�S��",50 };
	struct syouhin_data* p;
	p = &syouhin;
	display3(p);
	display2(syouhin);
}
void display2(struct syouhin_data syouhin)
{
	printf("syouhin.name=%s  syouhin.tanka=%d\n", syouhin.name, syouhin.tanka);
}
void display3(struct syouhin_data*syouhin)
{
	
	printf("%s  %d\n", syouhin->name,syouhin->tanka);

	//�A�h���X���󂯎���Ă���̂ŏ��������\
	strcpy(syouhin->name, "�l�グ�P�V�S��");
	syouhin->tanka = 100;
}