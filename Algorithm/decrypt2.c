#include<stdio.h>
main()
{
	int i, k[20];
	char s[20];
	printf("文字列を入力してください＞");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の複合化キー", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("複合化済み文字列は、%s", s);
}