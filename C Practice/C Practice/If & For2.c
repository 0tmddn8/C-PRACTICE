#include <stdio.h>


int main(void)
{
	int score = 85; // �л��� ������ �ǹ�
	if (score >= 90)
	{
		printf("����� ������ A�Դϴ�.\n");
	}
	else if (score >= 80) // �� if�� �ƴҰ�� ����
	{
		printf("����� ������ B�Դϴ�.\n");
	}
	else if (score >= 70)
	{
		printf("����� ������ C�Դϴ�.\n");
	}
	else // �� if���� ���� �ش� �ȵɶ� ����
	{
		printf("����� ������ F�Դϴ�.\n");
	}
	return 0;
}