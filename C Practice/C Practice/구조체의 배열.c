#include <stdio.h>
#define MAX_NAME_LENGTH 100
#define SIZE 5
struct student {
	int number; // 학번
	char name[20]; // 한글 10글자 까지의 학생이름
	double grade; // 학점을 의미
};


int main(void) {
	struct student list[SIZE];
	char buffer[MAX_NAME_LENGTH];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("학번을 입력하세요 : ");
		scanf_s("%d", &list[i].number);
		printf("이름을 입력하세요 : ");
		fgets(buffer, sizeof(buffer), stdin);
		fgets(list[i].name, sizeof(list[i].name), stdin);
		size_t name_length = strlen(list[i].name);
		if (list[i].name[name_length - 1] == '\n') {
			list[i].name[name_length - 1] = '\0';
		}
		printf("학점을 입력하세요 : ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("학번 : %d, 이름 : %s, 학점 :%.1f\n", list[i].number, list[i].name, list[i].grade);
	}
	return 0;
}