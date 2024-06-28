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
	struct syouhin_data syouhin = { "ケシゴム",50 };
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

	//アドレスを受け取っているので書き換え可能
	strcpy(syouhin->name, "値上げケシゴム");
	syouhin->tanka = 100;
}