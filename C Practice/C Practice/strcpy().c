#include <stdio.h>
#include <string.h>

int main(void) {
	char input[10] = "I Love You";
	char result[5] = "Love";
	strcpy(result, input); // result 의 값에 input 의 값을 복사
	printf("문자열 복사 : %s\n", result);
	return 0;
}