#include "myFunctions.h"
#include <stdio.h>
#include <time.h>

int main()
{
	printf("섭씨 %5.1f도 = 화씨 %5.1f도 \n", 27.0, Cel2Fah(27.0));
	printf("화씨 %5.1f도 = 섭씨 %5.1f도 \n", 95.0, Fah2Cel(95.0));
	printNumPyramid(5);
	printf("게임 점수 = %d\n", playUpAndDown(35, 0, 99));

	//3-11
	clock_t t1 = clock();
	int score = playUpAndDown(43, 0, 99);
	clock_t t2 = clock();
	double duration = (double)(t2 - t1) / CLOCKS_PER_SEC;

	printf("게임 점수 : %d점\n", score);
	printf("걸린 시간 : %lf초\n", duration);
}