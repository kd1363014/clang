#include<stdio.h>
main()
{
	char name[100];
	int score = 0;
	char ch;
	FILE* fp;
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
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n",name);
	fprintf(fp, "%d",score);
	fclose(fp);
}