#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for (i = 1; i < month; i++)
	{
		if (i == 2) // 이 프로그램에서는 윤년을 감안하지 않습니다.
		{
			sum += 28; // 2월은 28일 까지 있기 때문에 28을 더함
		}
		else if (i % 2 == 0)
		{
			sum += 30; // 짝수 월은 30일까지
		}
		else
		{
			sum += 31; // 홀수 월은 31일까지
		}
	}
	return sum + day; // day는 입력한 일의 개수
}


int main(void)
{
	int month, day;
	printf("월과 일을 숫자만 입력하시오 : ");
	scanf_s("%d %d", &month, &day);
	printf("1월 1일과 %d월 %d일의 날짜 차이는 %d일 입니다", month, day, getDays(month, day));
	return 0;
}