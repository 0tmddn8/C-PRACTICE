#include <stdio.h>
#define N 10

int main(void)
{
	int i, j;
	for (i = 0; i < N; i++) // i = 0이고 i < N 이 될때까지 i++을 실행한다.
	{
		for (j = 0; j < N; j++) // 위 for문이 10번 반복하는 동안 이 for문도 10번 반복해 총 100개의 ★이 출력됌
		{
			printf("★");
		}
		printf("\n");
	}
	return 0;
}