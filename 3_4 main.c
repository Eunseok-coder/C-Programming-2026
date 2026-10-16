#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int amount;

    printf("금액을 입력하세요: ");
    scanf("%d", &amount);

    int won10000 = amount / 10000;
    amount %= 10000;

    int won1000 = amount / 1000;
    amount %= 1000;

    int won100 = amount / 100;
    amount %= 100;

    int won10 = amount / 10;

    printf("10000원: %d개\n", won10000);
    printf("1000원: %d개\n", won1000);
    printf("100원: %d개\n", won100);
    printf("10원: %d개\n", won10);

    return 0;
}
