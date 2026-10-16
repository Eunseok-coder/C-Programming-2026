#include <stdio.h>

int main(void) {
	int num;
	int prev = 0; //직선에 입력된 숫자 (1~9 가 아닌 값으로 초기화)
	int streak = 0; //현재 연속 횟수
	int total = 0; //전체 입력 횟수 

	while (1) {
		printf("1~9사이 정수 입력:");
		scanf("%d", &num);

		if (num < 1 || num > 9) {
			printf("1~9사이 정수만 입력하세요.\n");
			continue; //유효하지 않은 값은 무시하고 다시 입력
		}

		total++;

		if (num == prev) {
			streak++;
		}
		else {
			streak = 1; //다른 숫자면 1부터 다시 센다
			prev = num;
		}

		if (streak == 3) {
			break;
		}

		if (streak == 3) {
			break;
		}
	}

	printf("숫자 %d가 3번 연속 입력되었습니다.\n", prev);
	printf("전체 입력 횟수: %d\n", total);

	return 0;
}