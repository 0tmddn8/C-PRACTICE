#include <stdio.h>

// 두 변수의 값을 서로 변환하는 포인터 함수
void swap(int* x, int* y) { // (int *x, int *y) : int 형의 어떠한 값을 가르키는 포인터 x 와 y 
	int temp;
	temp = *x; // temp의 값에 포인터 x가 가르키고 있는 위치의 값을 적용한다.
	*x = *y;
	*y = temp;
}


int main(void) {
	int x = 1;
	int y = 2;
	swap(&x, &y); // (&x, &y) : 변수 x와 y의 주소를 함수의 매개변수로 넣는다
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}