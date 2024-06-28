#include<stdio.h>
main()
{
	int i;
	char data[15] = "Language";
	char* p_data, s;
	printf("data[]=%s\n",data);
	printf("ŒŸõ•¶š‚ÍH ");
	scanf("%c", &s);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (p_data = data,i = 0; data[i]!='\0'; i++) {
		if (s == data[i]) {
			printf("%d  ", i + 1);
		}

	}
	
		printf("•¶š–Ú‚Å‚·B");
}