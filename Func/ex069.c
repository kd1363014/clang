#include<stdio.h>
main()
{
	int sum, cnt, data;
	int ret;
	printf("����:");
	ret=scanf("%d", &data);
	cnt = 0, sum = 0;
	while (ret != EOF)
	{
		sum += data;
		cnt++;
		printf("����:");
		ret = scanf("%d", &data);
	
	}
	printf("���v��%d  ���ρ�%.2f\n", sum, (float)sum / cnt);
}