#include<stdio.h>
main()
{
	char * p_ride[3] = { "car","bus","shinkansen" };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", p_ride[i]);//p_ride�ɂ�i=0�̏ꍇ�擪�A�h���Xc�����邽��*�͕s�v
	}
}
	