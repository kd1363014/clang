#include<stdio.h>
struct gamesoft {
	char cose[50];
	char kyouka[50];
	int tani;
};
main()
{
	struct gamesoft data = { "ゲームソフトⅠコース","C言語",8 };
	struct gamesoft* p = &data;
	printf("コース名:");
	gets(p->cose);
	printf("教科名:");
	gets(p->kyouka);
	printf("単位数:");
	scanf("%d", &data.tani);
	printf("コース名:%s\n教科名:%s\n単位数:%d\n", p->cose, p->kyouka, p->tani);
}