#include<stdio.h>
main()
{
	int i,j=0;
	char data[15] = "Language";
	char* p_data, s;
	printf("data[]=%s\n",data);
	printf("���������́H ");
	scanf("%c", &s);
	printf("�������ʂ́A");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++) {
		if (s == *(p_data + i)) {
			printf("%d  ", i + 1);
			j++;
		}
	}
	if (j > 0) {
		printf("�����ڂł��B\n");
	}
	else {
		printf("�����邱�Ƃ��ł��܂���ł���\n");
	}
	

}