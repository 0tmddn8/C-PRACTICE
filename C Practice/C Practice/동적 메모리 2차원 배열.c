// 동적 메모리 2차원 배열
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, x, y;
	int** pptr = (int**)malloc(sizeof(int*) * 8); // 각각의 배열을 가지고 있는 int 형의 포인터 변수를 8개 생성
	for (i = 0; i < 8; i++) {
		*(pptr + i) = (int*)malloc(sizeof(int) * 6); // 생성한 8개의 포인터가 가지고 있는 배열에 6개의 공간을 할당하고 그 공간 중 하나를 차지하는 포인터 생성
	}
	/* 위 코드로 총 48개의 int형 이차원 배열 공간을 만듬 */

	for (y = 0; y < 8; y++) {
		for (x = 0; x < 6; x++) {
			*(*(pptr + y) + x) = 6 * y + x;
		}
	}

	for (y = 0; y < 8; y++) {
		for (x = 0; x < 6; x++) {
			printf("%3d", *(*(pptr + y) + x));
		}
		printf("\n");
	}

	for (y = 0; y < 8; y++) {
		free(*(pptr + y));
	}

	return 0;
}