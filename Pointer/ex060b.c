#include<stdio.h>
main()
{
	int i;
	char data[15] = "Language";
	char* p_data, s;
	printf("data[]=%s\n",data);
	printf("検索文字は？ ");
	scanf("%c", &s);
	printf("検索結果は、");
	for (p_data = data,i = 0; data[i]!='\0'; i++) {
		if (s == data[i]) {
			printf("%d  ", i + 1);
		}

	}
	
		printf("文字目です。");
}