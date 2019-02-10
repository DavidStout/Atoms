#include <stdio.h>

void Bitwise_Shift_C1()
{
    int V1 = 16 << 1;
    printf("a: %d\n", V1);
}

void Bitwise_Shift_NC1()
{
    int V1 = 16 * 2;
    printf("b: %d\n", V1);
}

void Bitwise_Shift_C2()
{
    int V1 = 16 >> 1;
    printf("a: %d\n", V1);
}

void Bitwise_Shift_NC2()
{
    int V1 = 16 / 2;
    printf("c: %d\n", V1);
}

void Bitwise_Shift_C3()
{
    int V1 = 8 << 1;
    printf("d: %d\n", V1);
}

void Bitwise_Shift_NC3()
{
    int V1 = 8 * 2;
    printf("e: %d\n", V1);
}

int main(void)
{
    Bitwise_Shift_C1();
    Bitwise_Shift_NC1();
    printf("\n");
    Bitwise_Shift_C2();
    Bitwise_Shift_NC2();
    printf("\n");
    Bitwise_Shift_C3();
    Bitwise_Shift_NC3();
}
