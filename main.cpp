#include "MineSweeper.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int total;
	printf(" <Mine Sweeper>\n");
	printf(" �ż��� �� ������ ���� �Է�: ");
	scanf_s("%d", &total);
	playMineSweeper(total);
}