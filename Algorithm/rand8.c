#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a=0, b, i;
	srand(time(0));
	rand();
	b = rand() % 1000 + 1;
	printf("�P�`�P�O�O�O�̂Ȃ��œ�����̐���\�z���Ă�������\n");
	for (i = 1; a != b; i++) {
		printf("������̐��́H-��");
		scanf("%d", &a);
		if (a == b) {
			printf("\n�����I�I%d��ڂœ�����܂���\n", i);
		}
		else {
			if (a < b) {
				printf("������̐���菬�����ł�\n");
			}
			else{
				printf("������̐����傫���ł�\n");
			}
		}
		
	}
}