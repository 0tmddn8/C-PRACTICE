#include <stdio.h>


// 전역 변수 : 프로그램 어디에서나 접근 가능한 함수 
int hour;
int minute;
int minuteAdd;

void counter() // void : 반환형의 일종 반환값이 없다는 뜻. 반환형이 int 라면 int 값을 반환함 , counter : 함수 이름 , () : 매개 변수 [함수의 내부적으로 처리를 도와주는 기본적으로 존재하는 변수]
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
}


int main(void)
{
	printf("시를 입력하세요 : ");
	scanf_s("%d", &hour);
	printf("분을 입력하세요 : ");
	scanf_s("%d", &minute);
	printf("더할 분을 입력하세요 : ");
	scanf_s("%d", &minuteAdd);
	counter(); // counter() 함수를 사용함으로 써 main()함수가 짦아짐
	printf("더해진 시간은 %d시 %d분 입니다.\n", hour, minute);
	return 0;
}