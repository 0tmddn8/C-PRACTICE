#include <stdio.h>


// ���� ���� : ���α׷� ��𿡼��� ���� ������ �Լ� 
int hour;
int minute;
int minuteAdd;

void counter() // void : ��ȯ���� ���� ��ȯ���� ���ٴ� ��. ��ȯ���� int ��� int ���� ��ȯ�� , counter : �Լ� �̸� , () : �Ű� ���� [�Լ��� ���������� ó���� �����ִ� �⺻������ �����ϴ� ����]
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
}


int main(void)
{
	printf("�ø� �Է��ϼ��� : ");
	scanf_s("%d", &hour);
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &minute);
	printf("���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &minuteAdd);
	counter(); // counter() �Լ��� ��������� �� main()�Լ��� �F����
	printf("������ �ð��� %d�� %d�� �Դϴ�.\n", hour, minute);
	return 0;
}