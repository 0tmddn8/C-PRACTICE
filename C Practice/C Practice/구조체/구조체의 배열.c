#include <stdio.h>
#define MAX_NAME_LENGTH 100
#define SIZE 5
struct student {
	int number; // �й�
	char name[20]; // �ѱ� 10���� ������ �л��̸�
	double grade; // ������ �ǹ�
};


int main(void) {
	struct student list[SIZE];
	char buffer[MAX_NAME_LENGTH];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("�й��� �Է��ϼ��� : ");
		scanf_s("%d", &list[i].number);
		printf("�̸��� �Է��ϼ��� : ");
		fgets(buffer, sizeof(buffer), stdin);
		fgets(list[i].name, sizeof(list[i].name), stdin);
		size_t name_length = strlen(list[i].name);
		if (list[i].name[name_length - 1] == '\n') {
			list[i].name[name_length - 1] = '\0';
		}
		printf("������ �Է��ϼ��� : ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("�й� : %d, �̸� : %s, ���� :%.1f\n", list[i].number, list[i].name, list[i].grade);
	}
	return 0;
}