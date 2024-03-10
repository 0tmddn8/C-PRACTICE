// 변수
#include <stdio.h>
#include <limits.h> //limits.h : 자료의 한계값을 사용가능하게 함

int main(void)
{
	int x; //변수 선언 int는 정수형 변수를 말함
	x = 5; //변수의 수를 정함
	float y = 123456789.123456789;
	double z = 123456789.123456789; //double : 8byte의 저장공간을 가지고 있음
	int a = INT_MAX; //INT_MAX : int형의 최댓값
	printf("int형의 최댓값 a는 %d입니다.\n", a);
	printf("a + 1은 %d입니다.\n", a + 1);
	printf("y = %.2f\n", y); //%.2f : [소수점 2번째 자리까지만 표시] , \n : 줄바꿈
	printf("z = %.2f\n", z);
	printf("%d", x); //%d : int형 변수를 출력할 때 사용
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x)); //sixeof : 괄호안 변수의 메모리 크기를 나타냄[int형은 4]

		return 0;
}