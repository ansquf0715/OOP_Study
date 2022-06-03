#include <cstdio>

void findMinMax(int* a, int len, int* pmin, int* pmax)
{
	if (pmin != NULL)
	{
		*pmin = a[0];
		for (int i = 1; i < len; i++)
			if (*pmin > a[i]) *pmin = a[i];
	}
	if (pmax != NULL)
	{
		*pmax = a[0];
		for (int i = 1; i < len; i++)
			if (*pmax < a[i]) *pmax = a[i];
	}
}

struct Complex
{
	double real;
	double imag;
};

void printComplex(Complex c, const char* msg)
{
	printf("%s %4.2f + %4.2fi\n", msg, c.real, c.imag);
}

void resetComplex(Complex* a) { a->real = a->imag = 0.0; }

int main()
{
	int arr[10] = { 3,24,82,12,34,7,53,17,26,51 };
	int min, max;

	findMinMax(arr, 10, &min, &max);
	printf("최소~최대 : %2d~%2d\n", min, max);

	findMinMax(arr, 10, &min, NULL);
	printf("최솟값: %2d\n", min);

	findMinMax(arr, 10, NULL, &max);
	printf("최댓값: %2d\n", max);

	Complex c;
	resetComplex(&c);
	printComplex(c, "reset(c)=");
}