#include <cstdio>

int main()
{
	int n, i, k, count = 0;

	printf(" 소수를 구할 최대 숫자를 입력하시오 : ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		for (k = 2; k < i; k++)
		{
			if (i%k == 0) break;
		}
		if (k == i)
		{
			printf("%4d ", i);
			count++;
		}
	}
	printf("\n 2~%d사이의 소수의 개수는 %d개 입니다.\n\n", n, count);
}