#include <stdio.h>
#define N 10

int main(void)
{
	int i, j;
	for (i = 0; i < N; i++) // i = 0�̰� i < N �� �ɶ����� i++�� �����Ѵ�.
	{
		for (j = 0; j < N; j++) // �� for���� 10�� �ݺ��ϴ� ���� �� for���� 10�� �ݺ��� �� 100���� ���� ���
		{
			printf("��");
		}
		printf("\n");
	}
	return 0;
}