#include<stdio.h>
main()
{
	char name[100];
	int max_score, score = 0;
	char ch,max_name[100];
	FILE* fp;
	fp = fopen("score1.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("�ō����_�@���O: %s  �X�R�A:%d\n", max_name, max_score);

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
	if (score > max_score)
	{
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n", name);
		fprintf(fp, "%d\n", score);
		fclose(fp);
	}
}