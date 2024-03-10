#include <stdio.h>
#include <stdlib.h>

struct student {
	int number; // 학생의 번호
	char name[10]; // 학생의 이름
	double grade; // 학생의 학점
};

int main(void) {
	struct student s; // struct student 라는 자료형을 생성함
	s.number = 20150001;
	strcpy(s.name, "홍길동");
	s.grade = 4.5;
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);

	return 0;
}