#include<stdio.h>
struct gamesoft {
	char cose[50];
	char kyouka[50];
	int tani;
};
main()
{
	struct gamesoft data = { "�Q�[���\�t�g�T�R�[�X","C����",8 };
	printf("�R�[�X��:%s\n���Ȗ�:%s\n�P�ʐ�:%d\n", data.cose, data.kyouka, data.tani);
}