#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while (1) // for(;;) ó�� ���ѹݺ����� ���ȴ�.
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d %c %d", &x, &o, 1, &y);
		if (o == '+')
		{
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		else if (o == '-')
		{
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}
		else if (o == 'x' || o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}
		else if (o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}
		else if (o == '%')
		{
			printf("%d %c %d = %d\n", x, o, y, x % y); // x % y : x �� y �� ���� ������ ���� ��Ÿ��
		}
		else
		{
			printf("�Է��� �߸� �Ǿ����ϴ�.\n");
		}
		getchar(); // �ϳ��� �Է��� �ްڴٴ� �� [ enter Ű�� ������ �� ���� �ϳ��� �Է����� �ν��ϱ� ������ getchar() �Լ��� �ʿ��ϴ�]
		printf("���α׷��� ���� �Ͻðڽ��ϱ�? (y/n)");
		scanf_s("%c", &o);
		if (o == 'n' || o == 'N')
		{
			continue;
		}
		else if (o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("�Է��� �߸� �Ǿ����ϴ�.\n");
		}
	}
	return 0;
}