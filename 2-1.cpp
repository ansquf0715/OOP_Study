#include <cstdio>

int main()
{
	//예제 2-3
	/*short n = 0;

loop:
	n = n + 1;
	if (n > 0)
	{
		printf("\n short 최댓값 = %d", n);
		goto loop;
	}
	printf("\n오버플로우 발생\a \n");
	printf(" short 최솟값 = %d\n", n);*/

	//예제 2-4
	char ch;
	int i, j, max;

	printf("알파벳을 입력하세요: ");
	scanf("%c", &ch);
	printf(" 입력문자 : %c(10진수 %d)\n", ch, ch);
	printf(" 다음문자 : %c(10진수 %d)\n", ch + 1, ch + 1);
	printf(" 변수주소 : 0x%x\n\n", &ch);

	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", &i, &j);
	printf(" %d / %d \t = %d\n", i, j, i / j);
	printf(" %d %% %d \t = %d\n", i, j, i % j);
	printf(" %d/(double)%d \t = %lf\n", i, j, i / (double)j);
	printf("%d와 %d중 큰 값 \t = %d\n", i, j, (i > j) ? i : j);
	printf(" %d | %d \t = %d\n", i, j, i | j);
	printf(" %d & %d \t = %d\n", i, j, i & j);
	printf(" %d ^ %d \t = %d\n", i, j, i ^ j);
	printf(" %d >> 2 \t = %d\n", i, i >> 2);
	printf(" %d << 2 \t = %d\n", i, i << 2);
}