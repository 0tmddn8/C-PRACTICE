#include <stdio.h>

void print(int count) // ��� �Լ� : �ڱ� �ڽ��� ���� �ϴ� �Լ�
{
	if (count == 0)
	{
		return;
	}
	else
	{
		printf("���ڿ��� ����մϴ�.\n");
		print(count - 1); // print �Լ� �ȿ� print �Լ��� ���
	}
}


int main(void)
{
	int number;
	printf("���ڿ��� �� �� ����ұ��? : ");
	scanf_s("%d", &number);
	print(number);
	return 0;
}