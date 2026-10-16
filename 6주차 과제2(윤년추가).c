#include <stdio.h>

int main(void)
{
    int year, month, day;

    printf("연도를 입력하세요: ");
    scanf_s("%d", &year);

    printf("월을 입력하세요: ");
    scanf_s("%d", &month);

    switch (month)
    {
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            day = 29;
        else
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

    printf("%d년 %d월은 %d일까지 있습니다.\n", year, month, day);

    return 0;
}
