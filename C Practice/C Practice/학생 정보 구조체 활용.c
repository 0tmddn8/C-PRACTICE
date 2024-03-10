#include <stdio.h>

#define MAX_NAME_LENGTH 100

typedef struct {
    int number;
    char name[MAX_NAME_LENGTH];
    double grade;
} Student;

int main() {
    Student s;
    char buffer[MAX_NAME_LENGTH];

    printf("학번을 입력하세요: ");
    scanf_s("%d", &s.number);

    printf("이름을 입력하세요: ");
    // 버퍼에 있는 개행 문자를 제거하기 위해 fgets 함수 사용
    fgets(buffer, sizeof(buffer), stdin);
    fgets(s.name, sizeof(s.name), stdin);

    // 이름에 개행 문자가 포함되어있을 수 있으므로 개행 문자 제거
    size_t name_length = strlen(s.name);
    if (s.name[name_length - 1] == '\n') {
        s.name[name_length - 1] = '\0';
    }

    printf("학점을 입력하세요: ");
    scanf_s("%lf", &s.grade);

    // 입력된 정보 출력
    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2lf\n", s.grade);

    return 0;
}