#include <stdio.h>


int main(void)
{
	int x = -150;
	if (x < 0) // if : 괄호안 조건 충족시 아래 명령 수행
	{
		x = -x;
	}
	printf("x의 절댓값은 %d입니다.\n", x);
	return 0;
}