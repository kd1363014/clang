#include<stdio.h>
main()
{
	int a = 100, b = 200,w;
	int* p_a, * p_b;
	printf("実行前: a=%d\tb=200\n\n", a, b);
	p_a = &a;
	p_b = &b;
	//入れ替え処理
	w = *p_a;
	*p_a =* p_b;
	*p_b = w;

	printf("実行後: a=%d\tb=%d\n", a, b);

}