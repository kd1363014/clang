#include<stdio.h>
main()
{
	char data[10] = "Orange";//���̂悤�Ȓ��ڏ������܂ꂽ���̂𕶎��񃊃e�����i���e�����j�Ƃ���
	char* p_data;
	char* p = "Apple";
	p_data = data;
	printf("data[]=");
	while (*p_data) {
		putchar(*p_data++);
	}
	printf("\n*p=");
	while(*p){
		putchar(*p++);

	}
	putchar('\n');
}