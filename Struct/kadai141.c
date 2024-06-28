#include<stdio.h>
struct gamesoft {
	char cose[50];
	char kyouka[50];
	int tani;
};
main()
{
	struct gamesoft data = { "ゲームソフトⅠコース","C言語",8 };
	printf("コース名:%s\n教科名:%s\n単位数:%d\n", data.cose, data.kyouka, data.tani);
}