#include<stdio.h>
#include<stdlib.h>
main(int argc, char* argv[])
{
	int sum;
	if (argc == 3)
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%s + %s = %d\n", argv[1], argv[2], sum);
	}
	else
	{
		printf("エラー*２つの引数(整数)整数を入力して実行してください");
	}
}