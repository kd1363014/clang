#include<stdio.h>
main()
{
	int i,j=0;
	char data[15] = "Language";
	char* p_data, s;
	printf("data[]=%s\n",data);
	printf("検索文字は？ ");
	scanf("%c", &s);
	printf("検索結果は、");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++) {
		if (s == *(p_data + i)) {
			printf("%d  ", i + 1);
			j++;
		}
	}
	if (j > 0) {
		printf("文字目です。\n");
	}
	else {
		printf("見つけることができませんでした\n");
	}
	

}