#include<stdio.h>
main()
{
	int c;
	char dumy[256];

	c = getchar();//入力

	while (c != EOF)//ctrl+zで終了
	{
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();//入力s
	}

}