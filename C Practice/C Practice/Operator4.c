#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	// x�� y�� ���� ���� ������ �ִ°�?
	// ���п����� x = y -> x�� y�� ���� ��Ȳ�̶�� ��
	// c���� x == y -> true, x�� y�� ���� ���� ������ �ִٶ�� ���̴�.
	printf("x�� y�� ������? %d\n", x == y); // c���� 0�� ����(false), 1�� ��(true)
	printf("x�� y�� �ٸ���? %d\n", x != y); // ! : not
	printf("x�� y���� ū��? %d\n", x > y);
	printf("x�� y���� ������? %d\n", x < y);
	printf("x�� y���� ������? %d\n", x = y); // x��� ���� y��� ���� �ִ°�

	return 0;
}