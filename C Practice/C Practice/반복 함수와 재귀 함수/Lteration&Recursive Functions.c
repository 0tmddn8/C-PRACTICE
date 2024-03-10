#include <stdio.h>

// 반복 함수를 이용하여 숫자 피라미드를 출력합니다.
// 반복 함수는 오직 for문과 while문으로 구성이 됩니다.
int print(int a)
{
	int i, j;
	for (i = 0; i < a; i++) // for문을 a 번 반복합니다.
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d", j + 1);
		}
		printf("\n");
	}
}


int main(void)
{
	int a;
	scanf_s("%d", &a);
	print(a);
	return 0;
}