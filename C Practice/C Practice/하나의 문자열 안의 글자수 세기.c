#include <stdio.h>


int main(void) {
	char input[1001];
	gets(input); // input �̶�� �迭 �ȿ� ����ڰ� �Է��ϴ� ���ڿ��� enter �� ĥ������ ��.
	int count = 0;
	while (input[count] != '\0') { // �迭���� ���ڿ��� ���� ������ �ڵ������� null �� �� \0 ���� ��
		count++;
	}
	printf("�Է��� ���ڿ��� ���̴� %d �Դϴ�.\n", count);
	printf("�Է��� ���ڿ� : %s\n", input); // input�� �Էµ� ���ڿ��� ���
	return 0;
}