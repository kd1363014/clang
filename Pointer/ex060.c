#include<stdio.h>
main()
{
	int i,j=0;
	char data[15] = "Language";
	char* p_data, s;
	printf("data[]=%s\n",data);
	printf("ŒŸõ•¶š‚ÍH ");
	scanf("%c", &s);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++) {
		if (s == *(p_data + i)) {
			printf("%d  ", i + 1);
			j++;
		}
	}
	if (j > 0) {
		printf("•¶š–Ú‚Å‚·B\n");
	}
	else {
		printf("Œ©‚Â‚¯‚é‚±‚Æ‚ª‚Å‚«‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	

}