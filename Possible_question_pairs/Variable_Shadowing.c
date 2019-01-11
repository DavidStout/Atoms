#include <stdio.h>

void Variable_Shadowing_C1()
{
    int V1 = 4;
    {
        int V1 = 1;
        V1++;
        printf("a: %d\n", V1);
    }
    printf("b: %d\n", V1);
}

void Variable_Shadowing_NC1()
{
    int V1 = 4;
    {
        int V2 = 1;
        V2++;
        printf("c: %d\n", V2);
    }
    printf("d: %d\n", V1);
}

void Variable_Shadowing_C2()
{
    int V1 = 13;
    {
        int V1 = 22;
        V1++;
        printf("a: %d\n", V1);
    }
    printf("b: %d\n", V1);
}

void Variable_Shadowing_NC2()
{
    int V1 = 13;
    {
        int V2 = 22;
        V2++;
        printf("c: %d\n", V2);
    }
    printf("d: %d\n", V1);
}


void Variable_Shadowing_C3()
{
    int V1 = 10;
    {
        int V1 = 1;
        V1++;
        printf("a: %d\n", V1);
    }
    printf("b: %d\n", V1);
}

void Variable_Shadowing_NC3()
{
    int V1 = 10;
    {
        int V2 = 1;
        V2++;
        printf("c: %d\n", V2);
    }
    printf("d: %d\n", V1);
}
int main(void)
{
    Variable_Shadowing_C1();
    Variable_Shadowing_NC1();
    printf("\n");
    Variable_Shadowing_C2();
    Variable_Shadowing_NC2();
    printf("\n");
    Variable_Shadowing_C3();
    Variable_Shadowing_NC3();
}
