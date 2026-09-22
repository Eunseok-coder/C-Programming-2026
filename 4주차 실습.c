#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc1(void) {
    double inch, cm;

    printf("인치를 입력하세요: ");
    scanf("%lf", &inch);

    cm = inch * 2.54;

    printf("%.2f inch는 %.2f cm 입니다.\n", inch, cm);
}

void exerc2(void) {
    double F, C;

    printf("섭씨 온도를 입력하세요: ");
    scanf("%lf", &C);

    F = (C * 1.8) + 32;

    printf("섭씨 %.2f도는 화씨 %.2f도 입니다.\n", C, F);
}

void exerc3(void) {
    double r, area;

    printf("반지름을 입력하세요: ");
    scanf("%lf", &r);

    area = r * r * 3.14;

    printf("반지름 %.2f인 원의 넓이는 %.2f입니다.\n", r, area);
}

int main(void) {
    // exerc1();  // inch → cm
    // exerc2();  // 섭씨 → 화씨
    exerc3();     // 원의 넓이

    return 0;
}