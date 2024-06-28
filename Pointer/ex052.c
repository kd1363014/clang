#include<stdio.h>
main()
{
	int a = 100, b = 200,w;
	int* p_a, * p_b;
	printf("Às‘O: a=%d\tb=200\n\n", a, b);
	p_a = &a;
	p_b = &b;
	//“ü‚ê‘Ö‚¦ˆ—
	w = *p_a;
	*p_a =* p_b;
	*p_b = w;

	printf("ÀsŒã: a=%d\tb=%d\n", a, b);

}