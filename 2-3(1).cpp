#include <cstdio>

int main()
{
	int n, i, k, count = 0;

	printf(" �Ҽ��� ���� �ִ� ���ڸ� �Է��Ͻÿ� : ");
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
	printf("\n 2~%d������ �Ҽ��� ������ %d�� �Դϴ�.\n\n", n, count);
}