#include <cstdio>
#include <cstring>

void printArray(const int a[], int len, const char msg[])
{
	printf("%s : ", msg);
	for (int i = 0; i < len; i++)
		printf("%3d", a[i]);
	printf("\n");
}

void reverseArray(const int a[], int b[], int len)
{
	for (int i = 0; i < len; i++)
		b[len - i - 1] = a[i];
}

int* reverseArray1(const int a[], int len)
{
	int b[100];
	for (int i = 0; i < len; i++)
		b[len - i - 1] = a[i];
	return b; //肋给等 备泅 规过
}

int* reverseArray2(const int a[], int len)
{
	static int b[100];
	for (int i = 0; i < len; i++)
		b[len - i - 1] = a[i];
	return b;
}

int main()
{
	int a[10] = { 3,24,82,12,34,7,53,17,26,51 };
	int b[10], * c, * d;

	reverseArray(a, b, 10);
	c = reverseArray1(a, 10);
	d = reverseArray2(a, 10);

	printArray(a, 10, "array A");
	printArray(b, 10, "array B");
	printArray(c, 10, "array C");
	printArray(d, 10, "array D");
}