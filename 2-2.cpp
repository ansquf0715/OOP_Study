#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

int main()
{
	//���� 2-5
	int choice;
	double F, C;

	printf("�µ� ��ȯ���� ����.\n");
	printf(" 1: C->F, 2: F->C ==> ");
	scanf("%d", &choice);

	if (choice == 1) //���� -> ȭ��
	{
		printf("�����µ� �Է� : ");
		scanf("%lf", &C);
		F = C * 9.0 / 5 + 32.;
		printf("ȭ���µ� ��� : %6.1f\n", F);
	}

	if (choice == 2) //ȭ�� -> ����
	{
		printf("ȭ���µ� �Է� : ");
		scanf("%lf", &F);
		C = (F - 32)* (5.0 / 9.0);
		printf("�����µ� ��� : %6.1f\n", C);
	}

	//���� 2-6
	int score;
	char grade;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
	printf("������ %c �Դϴ�.\n", grade);
}