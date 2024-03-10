#include <stdio.h>


int main(void)
{
	int score = 85; // 학생의 점수를 의미
	if (score >= 90)
	{
		printf("당신의 학점은 A입니다.\n");
	}
	else if (score >= 80) // 위 if문 아닐경우 실행
	{
		printf("당신의 학점은 B입니다.\n");
	}
	else if (score >= 70)
	{
		printf("당신의 학점은 C입니다.\n");
	}
	else // 위 if문이 전부 해당 안될때 실행
	{
		printf("당신의 학점은 F입니다.\n");
	}
	return 0;
}