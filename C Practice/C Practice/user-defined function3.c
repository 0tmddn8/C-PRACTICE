#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for (i = 1; i < month; i++)
	{
		if (i == 2) // �� ���α׷������� ������ �������� �ʽ��ϴ�.
		{
			sum += 28; // 2���� 28�� ���� �ֱ� ������ 28�� ����
		}
		else if (i % 2 == 0)
		{
			sum += 30; // ¦�� ���� 30�ϱ���
		}
		else
		{
			sum += 31; // Ȧ�� ���� 31�ϱ���
		}
	}
	return sum + day; // day�� �Է��� ���� ����
}


int main(void)
{
	int month, day;
	printf("���� ���� ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &month, &day);
	printf("1�� 1�ϰ� %d�� %d���� ��¥ ���̴� %d�� �Դϴ�", month, day, getDays(month, day));
	return 0;
}