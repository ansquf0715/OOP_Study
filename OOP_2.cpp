#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

const double RateKphMph = 1.609344;

int main()
{
	//예제 2-1
	int kph;
	double mph;

	printf("1번");
	printf("당신의 구속을 입력하시오 [Km/H]: ");
	scanf("%d", &kph);
	mph = kph / RateKphMph;
	printf("당신의 구속은 %lf [MPH] 입니다. \n", mph);

	//예제 2-2
	float f;
	long int i;
	long double d;
	
	printf("\n\n2번\n\n");

	printf("<자료형의 크기 [bytes]>\n");
	printf("char 형 = %d\n", sizeof(char));
	printf("short 형 = %d\n", sizeof(short));
	printf("int 형 = %d\n", sizeof(int));
	printf("long 형 = %d\n", sizeof(long));
	printf("float 형 = %d\n", sizeof(float));
	printf("double 형 = %d\n", sizeof(double));

	printf("\n <변수의 크기 [bytes]>\n");
	printf("long int 변수 = %d\n", sizeof(i));
	printf("float 변수 = %d\n", sizeof(f));
	printf("long double 변수 %d\n", sizeof(d));

	printf("\n<상수나 연산 결과>\n");
	printf(" '3'의 자료형 = %d\n", sizeof('3'));
	printf("3의 자료형 = %d\n", sizeof(3));
	printf("3.0의 자료형 = %d\n", sizeof(3.0));
	printf("3.0f의 자료형 = %d\n", sizeof(3.0f));
	printf(" 3+4의 자료형 = %d\n", sizeof(3 + 4));
	printf("3.0 + 4의 자료형 = %d\n", sizeof(3.0 + 4));
}