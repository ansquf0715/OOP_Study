#include <cstdio>

int main()
{
	//���� 2-9
	int height;

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &height);

	for (int i = 1; i <= height; i++)
	{
		for (int j = 0; j < height - i; j++)
		{
			printf("   ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("%3d", j * 2 + 1);
		}
		for (int j = i - 2; j >= 0; j--)
		{
			printf("%3d", j * 2 + 1);
		}
		printf("\n");
	}

	//���� 2-10
	int income;
	double tax = 0;
	printf("������ �Է��ϼ��� ==> ");
	scanf("%d", &income);

	if (income <= 1200)
	{
		tax = income * 0.06;
	}
	if (1200 < income && income <= 4600)
	{
		tax = 1200 * 0.06 + (income - 1200)*0.15;
	}
	if (4600 < income && income <= 8800)
	{
		tax = 1200 * 0.6 + (4600 - 1200)*0.15 + (income - 4600)*0.24;
	}
	if (8800 < income && income <= 15000)
	{
		tax = 1200 * 0.06 + (4600 - 1200)*0.15 + 
			(8800 - 4600)*0.24 + (income - 8800)*0.35;
	}
	if (15000 < income)
	{
		tax = 1200 * 0.06 + (4600 - 1200)*0.15 + 
			(8800 - 4600)*0.24 + (15000 - 8800)*0.35 + (income - 15000)*0.38;
	}
	printf(" ��ü������ %7.1f�����Դϴ�.\n", tax);
	printf(" �����ҵ��� %7.1f�����Դϴ�.\n", income - tax);
}