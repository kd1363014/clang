#include<stdio.h>
main()
{
	int no;
	printf("西暦を入力: ");
	scanf("%d", &no);
	if (no < 1989){
		printf("平成生まれではありません\n");
	}
	else {
		printf("平成生まれです\n");
	}
}
