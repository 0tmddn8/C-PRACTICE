#include <stdio.h>


int main(void) {
	int score[5][2]; // [5] : 학생 수 , [2] : 수학 점수와 영어 점수
	int total[2] = { 0, }; // { 0, } : 일차원 배열을 할당 할 때 모든 데이터에 0을 넣겠다는 뜻
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d번 학생의 수학, 영어 점수 : ", i + 1);
		scanf_s("%d %d", &score[i][0], &score[i][1]);
	}
	for (i = 0; i < 5; i++) {
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	printf("\n\n5명의 수학 점수 합계 : %d\n", total[0]);
	printf("5명의 영어 점수 합계 : %d\n", total[1]);

	return 0;
}