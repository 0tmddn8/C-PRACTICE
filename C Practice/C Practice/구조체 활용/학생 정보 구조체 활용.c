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

    printf("�й��� �Է��ϼ���: ");
    scanf_s("%d", &s.number);

    printf("�̸��� �Է��ϼ���: ");
    // ���ۿ� �ִ� ���� ���ڸ� �����ϱ� ���� fgets �Լ� ���
    fgets(buffer, sizeof(buffer), stdin);
    fgets(s.name, sizeof(s.name), stdin);

    // �̸��� ���� ���ڰ� ���ԵǾ����� �� �����Ƿ� ���� ���� ����
    size_t name_length = strlen(s.name);
    if (s.name[name_length - 1] == '\n') {
        s.name[name_length - 1] = '\0';
    }

    printf("������ �Է��ϼ���: ");
    scanf_s("%lf", &s.grade);

    // �Էµ� ���� ���
    printf("�й�: %d\n", s.number);
    printf("�̸�: %s\n", s.name);
    printf("����: %.2lf\n", s.grade);

    return 0;
}