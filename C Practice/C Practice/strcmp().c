#include <stdio.h>
#include <string.h>

int main(void) {
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo)); /* strcmp() : 괄호 안 두 문자열을 비교하여 둘이 같다면 0을 출력하고
	왼쪽이 사전적으로 더 앞에 있다면 - 1을 오른쪽이 사전적으로 더 앞에 있다면 1을 출력함.*/
	return 0;
}