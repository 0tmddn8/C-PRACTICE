#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

struct point { // 하나의 점에 대한 구조체
	int x;
	int y;
};

struct rect { // 사각형에 대한 구조체
	struct point p1;
	struct point p2;
};




int main(void) {
	struct rect r; // r 이라는 이름의 사각형 생성
	int w, h, area, peri; // w : 너비, h : 높이, area : 넓이, peri : 둘레를 의미

	printf("왼쪽 상단의 좌표를 입력하세요 : ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 하단의 좌표를 입력하세요 : ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = abs(r.p2.x - r.p1.x); // abs : 절댓값을 나타내는 함수
	h = abs(r.p2.y - r.p1.y);

	area = w * h;
	peri = 2 * w + 2 * h;

	printf("사각형의 넓이는 %d이고, 둘레는 %d 입니다", area, peri);
	return 0;
}