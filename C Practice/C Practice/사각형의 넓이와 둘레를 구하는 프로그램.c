#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

struct point { // �ϳ��� ���� ���� ����ü
	int x;
	int y;
};

struct rect { // �簢���� ���� ����ü
	struct point p1;
	struct point p2;
};




int main(void) {
	struct rect r; // r �̶�� �̸��� �簢�� ����
	int w, h, area, peri; // w : �ʺ�, h : ����, area : ����, peri : �ѷ��� �ǹ�

	printf("���� ����� ��ǥ�� �Է��ϼ��� : ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("������ �ϴ��� ��ǥ�� �Է��ϼ��� : ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = abs(r.p2.x - r.p1.x); // abs : ������ ��Ÿ���� �Լ�
	h = abs(r.p2.y - r.p1.y);

	area = w * h;
	peri = 2 * w + 2 * h;

	printf("�簢���� ���̴� %d�̰�, �ѷ��� %d �Դϴ�", area, peri);
	return 0;
}