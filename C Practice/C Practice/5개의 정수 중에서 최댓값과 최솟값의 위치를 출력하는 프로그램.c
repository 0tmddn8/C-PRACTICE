#include <stdio.h>
#include <limits.h>
#define NUMBER 5



int main(void)
{
	int i, max, min, index; // i : �ӽ����� �迭 ������ ��ġ�� ���ϴ� ����, max : �ִ��� �ǹ�, min : �ּҰ��� �ǹ�, index : �ִ񰪰� �ּҰ��� ��ġ
	int array[NUMBER];
	max = 0;
	index = 0;
	//  array[0] ~ array[4] : �� 5���� �� �� �ִ� ũ���� �迭 ����
	for (i = 0; i < NUMBER; i++)
	{
		scanf_s("%d", &array[i]);
		if (max < array[i])
		{
			max = array[i];
			index = i;
		}
	}
	printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index + 1);
	min = INT_MAX;
	for (i = 0; i < NUMBER; i++)
	{
		scanf_s("%d", &array[i]);
		if (min > array[i])
		{
			min = array[i];
			index = i;
		}
	}
	printf("���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", min, index + 1);
	return 0;
}