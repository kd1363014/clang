#include<stdio.h>
main()
{
	char a;
	printf("アルファベット小文字？");
	a = getchar();
	for (; a <= 'z'; a++)
	{
		printf("%c ", a);
	}
}