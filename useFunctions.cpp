#include "myFunctions.h"
#include <stdio.h>
#include <time.h>

int main()
{
	printf("���� %5.1f�� = ȭ�� %5.1f�� \n", 27.0, Cel2Fah(27.0));
	printf("ȭ�� %5.1f�� = ���� %5.1f�� \n", 95.0, Fah2Cel(95.0));
	printNumPyramid(5);
	printf("���� ���� = %d\n", playUpAndDown(35, 0, 99));

	//3-11
	clock_t t1 = clock();
	int score = playUpAndDown(43, 0, 99);
	clock_t t2 = clock();
	double duration = (double)(t2 - t1) / CLOCKS_PER_SEC;

	printf("���� ���� : %d��\n", score);
	printf("�ɸ� �ð� : %lf��\n", duration);
}