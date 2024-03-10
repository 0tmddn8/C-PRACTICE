#include <stdio.h>

int main(void) {
	int i = 10;
	int* p;
	p = &i;
	printf("i = %d\n", i);
	*p = 20; // *p 의 값을 바꾸었기 때문에 *p가 가르키던 i 의 값 또한 변경 되었다.
	printf("i = %d\n", i);
	return 0;
}