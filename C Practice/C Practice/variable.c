// ����
#include <stdio.h>
#include <limits.h> //limits.h : �ڷ��� �Ѱ谪�� ��밡���ϰ� ��

int main(void)
{
	int x; //���� ���� int�� ������ ������ ����
	x = 5; //������ ���� ����
	float y = 123456789.123456789;
	double z = 123456789.123456789; //double : 8byte�� ��������� ������ ����
	int a = INT_MAX; //INT_MAX : int���� �ִ�
	printf("int���� �ִ� a�� %d�Դϴ�.\n", a);
	printf("a + 1�� %d�Դϴ�.\n", a + 1);
	printf("y = %.2f\n", y); //%.2f : [�Ҽ��� 2��° �ڸ������� ǥ��] , \n : �ٹٲ�
	printf("z = %.2f\n", z);
	printf("%d", x); //%d : int�� ������ ����� �� ���
	printf("���� x�� �޸� ũ��� %d�Դϴ�.", sizeof(x)); //sixeof : ��ȣ�� ������ �޸� ũ�⸦ ��Ÿ��[int���� 4]

		return 0;
}