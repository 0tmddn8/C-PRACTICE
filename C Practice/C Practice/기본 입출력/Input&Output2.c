#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	printf("������ ������ �Է��ϼ��� : ");
	scanf_s("%d", &number);
	for (i = 0; i < number; i++)
	{
		printf("������ ���� �Է��ϼ��� : ");
		scanf_s("%d", &x);
		sum += x;
	}
	printf("��ü ������ ���� %d�Դϴ�.\n", sum);
	return 0;
}