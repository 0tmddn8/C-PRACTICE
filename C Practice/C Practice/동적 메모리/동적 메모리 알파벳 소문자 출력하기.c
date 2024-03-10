// 동적 메모리로 알파벳 소문자 출력하기
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char* pc = NULL;
	int i = 0;
	pc = (char*)malloc(100 * sizeof(char)); // 100개의 문자가 들어갈 수 있는 메모리를 할당
	if (pc == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	/*pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입함*/
	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;
	}
	/* 아스키 코드 0 은 NULL을 의미함 */
	*(pc + i) = 0; // 포인터 값에 NULL을 삽입

	printf("%s\n", pc);
	free(pc);
	return 0;
}