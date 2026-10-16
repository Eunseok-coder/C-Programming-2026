#include <stdio.h>

int main(void) {
	int n;

	do {
		printf("1~9사이 정수 n 입력:");
		scanf("%d", &n);
	} while (n < 1 || n > 9);

	for (int i = 0; i < n; i++){  //행
		for (int j = 0; j < n; j++) {  //열
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}