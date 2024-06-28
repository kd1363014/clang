#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data []=%s\n", data);
	while (*p_data2++ = *p_data++);//代入処理
	//↑￥０が来ると左辺に０が代入され、偽となるためループをぬけることができる
	/*while (*p_data != '\0')
	{
		*p_data2 = *p_data;←10行目を分解するとこうなる
		p_data2++;
		p_data++;
	}
	*p_data2 = '\0';*/

	p_data2 = data2;//data2のアドレスに引き戻す
	printf("data2[]=%s\n", p_data2);
	while (*p_data2) {//*p_data2!='\0と同じ意味
		putchar(*p_data2++);
	}
	putchar('\n');

}