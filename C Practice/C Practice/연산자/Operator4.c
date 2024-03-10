#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	// x와 y가 같은 값을 가지고 있는가?
	// 수학에서는 x = y -> x와 y가 같은 상황이라는 뜻
	// c언어에서 x == y -> true, x와 y가 같은 값을 가지고 있다라는 뜻이다.
	printf("x와 y가 같은가? %d\n", x == y); // c언어에서 0은 거짓(false), 1은 참(true)
	printf("x와 y가 다른가? %d\n", x != y); // ! : not
	printf("x가 y보다 큰가? %d\n", x > y);
	printf("x가 y보다 작은가? %d\n", x < y);
	printf("x에 y값을 넣으면? %d\n", x = y); // x라는 값에 y라는 값을 넣는것

	return 0;
}