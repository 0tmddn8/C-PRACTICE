#include <stdio.h>
#include <stdlib.h>

struct student {
	int number; // �л��� ��ȣ
	char name[10]; // �л��� �̸�
	double grade; // �л��� ����
};

int main(void) {
	struct student s; // struct student ��� �ڷ����� ������
	s.number = 20150001;
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.5;
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);

	return 0;
}