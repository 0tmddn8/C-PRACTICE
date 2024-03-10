#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("현재의 x는 %d입니다.\n", x);
	x++; // x++ : x에 1을 더한다
	printf("현재의 x는 %d입니다.\n", x);
	printf("현재의 x는 %d입니다.\n", x--); //현재 x의 값을 출력하고 나서 x--을 함 (출력한 뒤 x 값에서 -1)
	printf("현재의 x는 %d입니다.\n", x); //x--을 했기 때문에 0으로 나옴
	printf("현재의 x는 %d입니다.\n", --x); //x의 값을 출력하기 전에 --x을 함 (출력 전 x의 값에서 -1)
	return 0;
}