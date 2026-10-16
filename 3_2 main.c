#include <stdio.h>

int main(void)
{
    int score = 75;
    int attendance = 85;
    int passed;

    passed = score >= 60 && attendance >= 80;

    printf("합격 여부: %d\n", passed);

    return 0;
}
