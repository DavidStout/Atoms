#include <stdio.h>

void F1(int V1)
{
printf("b: %d\n", V1);
}

void recursion_C1(int V2)
{
    if(V2 < 2)
    {
        printf("a: %d\n", V2);
        V2++;
        recursion_C1(V2);
    }
}

void recursion_NC1(int V3)
{
    while(V3 < 2)
    {
        F1(V3);
        V3++;
    }
}

void recursion_C2(int V4)
{
    if(V4 <= 2)
    {
        printf("c: %d\n", V4);
        V4++;
        recursion_C2(V4);
    }
}

void recursion_NC2(int V5)
{
    while(V5 <= 2)
    {
        F1(V5);
        V5++;
    }
}


void recursion_C3(int V6)
{
    if(V6 > 0)
    {
        printf("e: %d\n", V6);
        V6--;
        recursion_C3(V6);
    }
}

void recursion_NC3(int V7)
{
    while(V7 > 0)
    {
        F1(V7);
        V7--;
    }
}

int main(void)
{
    recursion_C1(0);
    recursion_NC1(0);
    recursion_C2(1);
    recursion_NC2(1);
    recursion_C3(2);
    recursion_NC3(2);
}
