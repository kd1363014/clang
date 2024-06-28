#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);
	if (0x41<=a&&0x5a>=a)
	{
		printf("その文字は「大文字です」\n");
	}
	else
	{
		if (0x61 <= a && 0x7a >= a)
		{
			printf("その文字は「小文字です」\n");
		}
		else
		{
			printf("エラー※ アルファベットを入力してください。\n");
		}
	}
}