#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char data,data2;//入力用変数

	c = scanf("%c%c",&data,&data2);//入力

	while (c != EOF)//ctrl+zで終了
	{
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data, &data2);//入力
	}
	printf("%d\n", printf("HELLO"));//5が表示される
	printf("%d\n", printf("こんにちは"));//10が表示される
}