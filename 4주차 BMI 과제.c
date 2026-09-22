#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double height;
    double weight;
    double bmi;

    printf("키(cm)와 몸무게(kg)를 입력하세요: ");
    scanf("%lf %lf", &height, &weight);

    height /= 100.0;  // cm → m 변환
    bmi = weight / (height * height);

    printf("bmi = %.2f\n", bmi);

    return 0;
}