#include<stdio.h>
struct syouhin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syouhin_data syouhin[3] = { {"エンピツ",30,5},{"ケシゴム",50,20},{"フデバコ",500,3} };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("商品名:%s\t", syouhin[i].name);
		printf("単 価:%4d\t", syouhin[i].tanka);
		printf("個 数:%4d\n", syouhin[i].kosuu);
	}

}