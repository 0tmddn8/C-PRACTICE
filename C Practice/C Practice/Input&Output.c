#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while (1) // for(;;) 처럼 무한반복으로 사용된다.
	{
		printf("수식을 입력하세요 : ");
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
			printf("%d %c %d = %d\n", x, o, y, x % y); // x % y : x 를 y 로 나눈 나머지 값을 나타냄
		}
		else
		{
			printf("입력이 잘못 되었습니다.\n");
		}
		getchar(); // 하나의 입력을 받겠다는 뜻 [ enter 키를 누르는 것 또한 하나의 입력으로 인식하기 때문에 getchar() 함수가 필요하다]
		printf("프로그램을 종료 하시겠습니까? (y/n)");
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
			printf("입력이 잘못 되었습니다.\n");
		}
	}
	return 0;
}