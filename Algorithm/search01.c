#include<stdio.h>
main()
{
	int i, s, data[10] = { 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	printf("\n’Tõ’l‚ð“ü—Í„");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == data[i])
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("Œ©•t‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("d[%d]‚É‚ ‚Á‚½",i);
	}
}

