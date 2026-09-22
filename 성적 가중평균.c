#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double midterm;
    double final_exam;
    double assignment;
    double weighted_score;

    scanf("%lf %lf %lf", &midterm, &final_exam, &assignment);

    weighted_score = midterm * 0.30 + final_exam * 0.40 + assignment * 0.30;

    printf("weighted_score=%.2f\n", weighted_score);

    return 0;
}
