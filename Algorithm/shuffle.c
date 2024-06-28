#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, target, work, data[20] ;
	srand(time(0));
	rand();
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}
	 i=0;
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}
	target = 0;
	for (; target < 20; target++) {
		printf("%d\n", data[target]);

	//int i, target, work, data[20];
	//srand(time(0));
	//rand();
	//i = 0;
	//while (i < 20) {
		//data[i] = i + 1;
		//i++;
	//}
	//i = 0;
	//while (i < 20) {
		//target = rand() % 20;
		//work = data[i];
		//data[i] = data[target];
		//data[target] = work;
		//i++;
	//}
	//target= 0;
	//for (; target < 20; target++) {
	//	printf("%d\n", data[target]);
	//}
}