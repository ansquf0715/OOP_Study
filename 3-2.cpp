#include <stdio.h>
#include <stdlib.h>
#include <time.h>

inline int randCoin() { return rand() % 2; }
inline int randDice() { return rand() % 6 + 1; }
inline char randLChar() { return rand() % 24 + 'a'; }
inline char randUChar() { return rand() % 24 + 'A'; }
inline char randNum() { return rand() % 10 + '0'; }

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}
float add(float a, float b)
{
	return a + b;
}
double add(double a, double b)
{
	return a + b;
}

int main()
{
	//예제 3-9
	int r1 = add(1, 2);
	float r2 = add(1.0f, 2.0f);
	double r3 = add(1.0, 2.0);

	printf("%d, %lf, %lf", r1, r2, r3);

	//예제 3-10
	srand((unsigned)time(NULL));
	printf(" coin\tdice\tLChar\tUChar\tNum\n");
	for (int i = 0; i < 6; i++)
	{
		printf(" %s\t", randCoin() == 0 ? "head" : "tail");
		printf("%2d\t", randDice());
		printf("%c\t", randLChar());
		printf("%c\t", randUChar());
		printf("%c\n", randNum());
	}
}