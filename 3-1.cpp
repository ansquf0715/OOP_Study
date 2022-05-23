#include <stdio.h>
#include <math.h>

double myPow(double x, int y) //예제 3-1
{
	double result = 1.0;
	for (int i = 0; i < y; i++)
	{
		result = result * x;
	}
	return result;
}

int add(int a, int b) //예제 3-2
{
	int sum;
	sum = a + b;
	return sum;
}

int factorial(int n) //예제 3-2
{
	int  result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

void printNumPyramid(int height)
{
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
}

int main()
{
	printf("라이브러리 pow(2.0,5) = %lf\n", pow(2.0, 5));
	printf("내가만든 myPow(2.0,5) = %lf\n", myPow(2.0, 5));
	printf("3+2 = %d\n", add(3, 2));
	printf("5! = %d\n", factorial(5));
	printNumPyramid(4);
}