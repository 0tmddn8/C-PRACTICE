// 구조체 동적 메모리 할당
#include <stdio.h>
#include <stdlib.h>

struct Book {
	int number;
	char title[100];
};

void showBook(struct Book* p, int n) { // struct Book* p = Book 이라는 구조체를 동적 메모리 할당한 포인터 변수 , int n = 책의 갯수.
	int i;
	for (i = 0; i < n; i++) {
		printf("번호 %d : %s\n", (p + i)->number, (p + i)->title);
	}
}


int main(void) {
	struct Book* p;
	p = (struct Book*)malloc(2 * sizeof(struct Book));
	if (p == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	p->number = 1; // 원래 구조체를 사용할때는 p.number 이런 식으로 사용하지만 구조체 포인터를 사용할 때에는 p->number 이런 식으로 사용한다.
	strcpy(p->title, "C Programming");

	(p + 1)->number = 2;
	strcpy((p + 1)->title, "Data Structure");

	showBook(p, 2);
	free(p);

	return 0;
}