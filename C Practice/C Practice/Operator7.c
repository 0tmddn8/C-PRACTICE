#include <stdio.h>
#include <math.h> // pow()[�ŵ����� �Լ�], abs()[���� �Լ�]�� ����ϰ� ���ش�.

int main(void)
{
	double x = pow(2.0, 20.0); // pow(x, y) : x�� y��ŭ �ŵ�����
	printf("2�� 20������ %.0f�Դϴ�.\n", x); // %.0f : �Ҽ��� 0�� �ڸ����� ��� 
	return 0;
}