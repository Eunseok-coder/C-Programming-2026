#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	int score[SIZE];
	int max, min, sum = 0;
	double avg;

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++) score[i] = rand() % 101;

	printf("학생 수: %d명\n\n", SIZE);

	for (int i = 0; i < SIZE; i++) {
		printf("%2d번 학생: %3d점\n", i + 1, score[i]);
	}

	max = score[0];
	min = score[0];
	for (int i = 0; i < SIZE; i++) {
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
		sum += score[i];
	}
	avg = (double)sum / SIZE;

	printf("\n최댓값: %d점\n", max);
	printf("최솟값: %d점\n", min);
	printf("평균: %.2f점\n", avg);

	return 0;
}