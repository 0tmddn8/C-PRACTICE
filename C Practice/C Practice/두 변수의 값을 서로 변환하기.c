#include <stdio.h>

// �� ������ ���� ���� ��ȯ�ϴ� ������ �Լ�
void swap(int* x, int* y) { // (int *x, int *y) : int ���� ��� ���� ����Ű�� ������ x �� y 
	int temp;
	temp = *x; // temp�� ���� ������ x�� ����Ű�� �ִ� ��ġ�� ���� �����Ѵ�.
	*x = *y;
	*y = temp;
}


int main(void) {
	int x = 1;
	int y = 2;
	swap(&x, &y); // (&x, &y) : ���� x�� y�� �ּҸ� �Լ��� �Ű������� �ִ´�
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}