#include<stdio.h>
main()
{
	char data[6] = "Apple";
	int i;
	printf("１字ずつ表示\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c\n", data[i]);
	}
	printf("\n文字列を表示\n");
	//printf("%s",&data[0]);//%sの時はアドレスを指定する
	printf("%s", &data);//配列名だけ書くと先頭アドレスを表す
}