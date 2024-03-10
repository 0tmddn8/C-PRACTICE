// 동적 메모리 기초 예제
#include <stdio.h>
#include <stdlib.h> // 동적 메모리를 사용하기 위해 쓰는 라이브러리


int main(void) {
	int* pi; // pointer integer의 약자
	pi = (int*)malloc(sizeof(int)); // malloc(sizeof(int)) = 메모리를 sizeof(int) 만큼 할당하라, pi = (int*) = pi가 주소를 기억하도록 하는 역할
	if (pi == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1); // 프로그램을 종료 시킴
	}
	*pi = 100; // pi가 가르키던 주소의 값에 100을 넣는다.
	printf("%d\n", *pi);
	/*동적 메모리를 사용한 이후에는 무조건 해당 메모리를 반환한다.*/
	free(pi); // 할당된 메모리를 할당 해제함.
	return 0;
}