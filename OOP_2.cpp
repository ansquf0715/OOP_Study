#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

const double RateKphMph = 1.609344;

int main()
{
	//���� 2-1
	int kph;
	double mph;

	printf("1��");
	printf("����� ������ �Է��Ͻÿ� [Km/H]: ");
	scanf("%d", &kph);
	mph = kph / RateKphMph;
	printf("����� ������ %lf [MPH] �Դϴ�. \n", mph);

	//���� 2-2
	float f;
	long int i;
	long double d;
	
	printf("\n\n2��\n\n");

	printf("<�ڷ����� ũ�� [bytes]>\n");
	printf("char �� = %d\n", sizeof(char));
	printf("short �� = %d\n", sizeof(short));
	printf("int �� = %d\n", sizeof(int));
	printf("long �� = %d\n", sizeof(long));
	printf("float �� = %d\n", sizeof(float));
	printf("double �� = %d\n", sizeof(double));

	printf("\n <������ ũ�� [bytes]>\n");
	printf("long int ���� = %d\n", sizeof(i));
	printf("float ���� = %d\n", sizeof(f));
	printf("long double ���� %d\n", sizeof(d));

	printf("\n<����� ���� ���>\n");
	printf(" '3'�� �ڷ��� = %d\n", sizeof('3'));
	printf("3�� �ڷ��� = %d\n", sizeof(3));
	printf("3.0�� �ڷ��� = %d\n", sizeof(3.0));
	printf("3.0f�� �ڷ��� = %d\n", sizeof(3.0f));
	printf(" 3+4�� �ڷ��� = %d\n", sizeof(3 + 4));
	printf("3.0 + 4�� �ڷ��� = %d\n", sizeof(3.0 + 4));
}