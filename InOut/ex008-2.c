#include<stdio.h>
main()
{
	float b = 5.0;
//表示桁数の指定。
	printf("b/3=%8.3f \n", b / 3.0);
	//全体8桁の小数点以下3桁
	printf("b/3=%20.3f \n", b / 3.0);//%の前に数字で桁数を固定
}
