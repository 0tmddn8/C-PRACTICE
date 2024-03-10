#include <stdio.h>
#include <math.h> // pow()[거듭제곱 함수], abs()[절댓값 함수]를 사용하게 해준다.

int main(void)
{
	double x = pow(2.0, 20.0); // pow(x, y) : x가 y만큼 거듭제곱
	printf("2의 20제곱은 %.0f입니다.\n", x); // %.0f : 소수점 0의 자리까지 출력 
	return 0;
}