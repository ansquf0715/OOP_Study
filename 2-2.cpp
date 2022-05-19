#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

int main()
{
	//øπ¡¶ 2-5
	int choice;
	double F, C;

	printf("ø¬µµ ∫Ø»Ø¡æ∑˘ º±≈√.\n");
	printf(" 1: C->F, 2: F->C ==> ");
	scanf("%d", &choice);

	if (choice == 1) //º∑ææ -> »≠ææ
	{
		printf("º∑ææø¬µµ ¿‘∑¬ : ");
		scanf("%lf", &C);
		F = C * 9.0 / 5 + 32.;
		printf("»≠ææø¬µµ ∞ËªÍ : %6.1f\n", F);
	}

	if (choice == 2) //»≠ææ -> º∑ææ
	{
		printf("»≠ææø¬µµ ¿‘∑¬ : ");
		scanf("%lf", &F);
		C = (F - 32)* (5.0 / 9.0);
		printf("º∑ææø¬µµ ∞ËªÍ : %6.1f\n", C);
	}

	//øπ¡¶ 2-6
	int score;
	char grade;
	printf("¡°ºˆ∏¶ ¿‘∑¬«œººø‰ : ");
	scanf("%d", &score);

	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
	printf("«–¡°¿∫ %c ¿‘¥œ¥Ÿ.\n", grade);
}