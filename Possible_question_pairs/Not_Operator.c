#include <stdio.h>

void Not_Operator_C1()
{
    int V1 = !1;
    printf("a: %d\n", V1);
}

void Not_Operator_NC1()
{
    int V2 = 1;
    if (V2==0)
    {
        V2 = 1;
    }
    else
    {
        V2 = 0;
    }
    printf("b: %d\n", V2);
}

void Not_Operator_C2()
{
    int V1 = !-1;
    printf("a: %d\n", V1);
}

void Not_Operator_NC2()
{
    int V2 = -1;
    if (V2==0)
    {
        V2 = 1;
    }
    else 
    {
        V2 = 0;
    }
    printf("b: %d\n", V2);
}

void Not_Operator_C3()
{
    int V1 = !0;
    printf("a: %d\n", V1);
}

void Not_Operator_NC3()
{
    int V2 = 0;
    if (V2==0)
    {
        V2 = 1;
    }
    else 
    {
        V2 = 0;
    }
    printf("b: %d\n", V2);
}
int main(void)
{
    Not_Operator_C1();
    Not_Operator_NC1();
    printf("\n");
    Not_Operator_C2();
    Not_Operator_NC2();
    printf("\n");
    Not_Operator_C3();
    Not_Operator_NC3();
}

