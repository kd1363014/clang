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
	printf("最高得点　名前: %s  スコア:%d\n", max_name, max_score);

	printf("プレイヤーの名前は:");
	scanf("%s", name);
	
	while (1)
	{
		printf("現在のスコア:%d(Enterで加算,eで終了)\n", score);
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