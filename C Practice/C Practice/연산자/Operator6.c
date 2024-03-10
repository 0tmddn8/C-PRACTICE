#include <stdio.h>

int main(void)
{
	// ? : 왼쪽 조건이 참일경우 " : " 의 왼쪽 결과를 출력, 아닐 경우 " : " 의 오른쪽 결과를 출력

	int x = -50, y = 30;
	int absoluteX = (x > 0) ? x : -x; //항상 절댓값을 출력
	int max = (x > y) ? x : y; // 항상 큰 결과 출력
	int min = (x < y) ? x : y; // 항상 작은 결과 출력
	printf("x의 절댓값은 %d입니다.\n", absoluteX);
	printf("x와 y중에서 최댓값은 %d입니다.\n", max);
	printf("x와 y중에서 최솟값은 %d입니다.\n", min);

	return 0;
}