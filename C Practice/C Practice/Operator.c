#include <stdio.h>
#define SECOND_PER_MINUTE 60 // 상수에 대한 정의


int main(void)
{
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE; // input 값을 SECOND_PER_MINUTE 값으로 나눈 수
	int second = input % SECOND_PER_MINUTE; // input 값을 SECOND_PER_MINUTE 값으로 나누고 나머지 수
	printf("%d초는 %d분 %d초 입니다.\n", input, minute, second);
	return 0;
}