#include <stdio.h>

// �ݺ� �Լ��� �̿��Ͽ� ���� �Ƕ�̵带 ����մϴ�.
// �ݺ� �Լ��� ���� for���� while������ ������ �˴ϴ�.
int print(int a)
{
	int i, j;
	for (i = 0; i < a; i++) // for���� a �� �ݺ��մϴ�.
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d", j + 1);
		}
		printf("\n");
	}
}


int main(void)
{
	int a;
	scanf_s("%d", &a);
	print(a);
	return 0;
}