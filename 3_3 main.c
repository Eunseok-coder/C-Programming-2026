#include <stdio.h>

#define READ 0x01
#define WRITE 0x02
#define EXEC 0x04

int main(void)
{
    unsigned int permission = READ | WRITE;

    permission |= EXEC;

    printf("권한 값: %u\n", permission);

    return 0;
}
