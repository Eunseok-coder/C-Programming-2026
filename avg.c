#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int quotient;
    int remainder;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &a);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &b);

    quotient = a / b;
    remainder = a % b;

    printf("몫: %d\n", quotient);
    printf("나머지: %d\n", remainder);

    return 0;
}
