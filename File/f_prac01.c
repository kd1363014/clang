#include<stdio.h>
main()
{
	char name[100];
	int score = 0;
	char ch;
	FILE* fp;
	printf("�v���C���[�̖��O��:");
	scanf("%s", name);
	
	while (1)
	{
		printf("���݂̃X�R�A:%d(Enter�ŉ��Z,e�ŏI��)\n", score);
		ch = getch();
		
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n",name);
	fprintf(fp, "%d",score);
	fclose(fp);
}