#include<stdio.h>
void str(char *s1,char*s2);
main()
{
	char str1[256],str2[256];
	int i;
	printf("文字列？:");
	gets(str1);
	str(str1,str2);
	printf("str1:%s\nstr2:%s\n", str1,str2);
}
void str(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);//ここで入力した文字数を数える
	i--;//str2の一文字目に￥０が入らないように一つ減らす
	for ( j = 0; i >= 0; i--, j++)
	{
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';


}
