#include <stdio.h>


int main(void) {
	char input[1001];
	gets(input); // input 이라는 배열 안에 사용자가 입력하는 문자열이 enter 을 칠때까지 들어감.
	int count = 0;
	while (input[count] != '\0') { // 배열에서 문자열이 없는 곳에는 자동적으로 null 값 즉 \0 값이 들어감
		count++;
	}
	printf("입력한 문자열의 길이는 %d 입니다.\n", count);
	printf("입력한 문자열 : %s\n", input); // input에 입력된 문자열을 출력
	return 0;
}