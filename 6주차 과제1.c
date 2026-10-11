#include <stdio.h>

int main() {
    int grade;

    printf("학년을 입력하세요 : ");
    scanf_s("%d", &grade);

    // 기존 if-else문 (주석 처리)
    /*
    if (grade == 1) {
        printf("1학년입니다.\n");
    }
    else if (grade == 2) {
        printf("2학년입니다.\n");
    }
    else if (grade == 3) {
        printf("3학년입니다.\n");
    }
    else {
        printf("잘못된 값을 입력하셨습니다.\n");
    }
    */

    // switch-case문으로 변환
    
    switch (grade) {
    case 1:
        printf("1학년입니다.\n");
        break;

    case 2:
        printf("2학년입니다.\n");
        break;

    case 3:
        printf("3학년입니다.\n");
        break;

    default:
        printf("잘못된 값을 입력하셨습니다.\n");
        break;
    }

    return 0;
}
