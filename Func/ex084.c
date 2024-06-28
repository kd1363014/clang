#include<stdio.h>
void str(char *s1,char*s2);
main()
{
	char str1[256],str2[256];
	int i;
	printf("•¶Žš—ñH:");
	gets(str1);
	str(str1,str2);
	printf("str1:%s\nstr2:%s\n", str1,str2);
}
void str(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);//‚±‚±‚Å“ü—Í‚µ‚½•¶Žš”‚ð”‚¦‚é
	i--;//str2‚Ìˆê•¶Žš–Ú‚É‚O‚ª“ü‚ç‚È‚¢‚æ‚¤‚Éˆê‚ÂŒ¸‚ç‚·
	for ( j = 0; i >= 0; i--, j++)
	{
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';


}
