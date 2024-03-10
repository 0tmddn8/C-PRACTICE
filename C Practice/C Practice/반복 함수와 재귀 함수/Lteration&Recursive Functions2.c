#include <stdio.h>

void print(int count) // 재귀 함수 : 자기 자신을 포함 하는 함수
{
	if (count == 0)
	{
		return;
	}
	else
	{
		printf("문자열을 출력합니다.\n");
		print(count - 1); // print 함수 안에 print 함수를 사용
	}
}


int main(void)
{
	int number;
	printf("문자열을 몇 개 출력할까요? : ");
	scanf_s("%d", &number);
	print(number);
	return 0;
}