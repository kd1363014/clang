#include<stdio.h>
struct gamesoft {
	char cose[50];
	char kyouka[50];
	int tani;
};
main()
{
	struct gamesoft data = { "�Q�[���\�t�g�T�R�[�X","C����",8 };
	struct gamesoft* p = &data;
	printf("�R�[�X��:");
	gets(p->cose);
	printf("���Ȗ�:");
	gets(p->kyouka);
	printf("�P�ʐ�:");
	scanf("%d", &data.tani);
	printf("�R�[�X��:%s\n���Ȗ�:%s\n�P�ʐ�:%d\n", p->cose, p->kyouka, p->tani);
}