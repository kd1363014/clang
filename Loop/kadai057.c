#include<stdio.h>
main()
{
	char a;
	printf("アルファベット大文字？");
	a = getchar();
	for (; a <= 'Z'; a++)
	{
		printf("%c ", a);
	}
}