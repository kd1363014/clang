#include<stdio.h>
main()
{
	char data[10] = "Orange";//このような直接書き込まれたものを文字列リテラル（リテラル）という
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