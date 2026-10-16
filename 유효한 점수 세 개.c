#include <stdio.h>

int main(void) {
	int score;
	int count = 0;
	int sum = 0;

	while (count < 3) {
		printf("점수 입력 (종료:-1):");
		scanf("%d", &score);

		if (score == -1) {
			break; //-1이면 즉시 종료
		}
		if (score < 0 || score > 100) {
			printf("점수는 0~100 사이의 점수만 입력하세요.\n");
			continue; //유효하지 않은 점수는 무시하고 다시 입력
		}

		sum += score; // 유효한 점수일 때만 증가
		count++;
	}

	if (count == 0) {
		printf("입력된 점수가 없습니다.\n");
	}
	else {
		printf("유효한 점수 개수: %d\n", count);
		printf("평균:%.2f\n", (double)sum / count);
	}

	return 0;
}
