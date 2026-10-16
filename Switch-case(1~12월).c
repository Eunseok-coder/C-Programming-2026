#include <stdio.h>

int main(void)
{
    int month, day;

    printf("월을 입력하세요(1~12): ");
    scanf_s("%d", &month);

    switch (month)
    {
    case 2:
        day = 28;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;

    default:
        printf("잘못된 월입니다.\n");
        return 1;
    }

    printf("%d월은 %d일까지 있습니다.\n", month, day);

    return 0;
}
