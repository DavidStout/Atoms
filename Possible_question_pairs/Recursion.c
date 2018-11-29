#include <stdio.h>

void recursion_C1(int j)
{
    if(j < 2)
    {
        printf("a: %d\n", j);
        j++;
        recursion_C1(j);
    }
}

void recursion_NC1(int j)
{
    while(j < 2)
    {
        printf("b: %d\n", j);
        j++;
    }
}

void recursion_C2(int k)
{
    if(k <= 2)
    {
        printf("c: %d\n", k);
        k++;
        recursion_C2(k);
    }
}

void recursion_NC2(int k)
{
    while(k <= 2)
    {
        printf("d: %d\n", k);
        k++;
    }
}

void recursion_C3(int i)
{
    if(i > 0)
    {
        printf("e: %d\n", i);
        i--;
        recursion_C3(i);
    }
}

void recursion_NC3(int i)
{
    while(i > 0)
    {
        printf("f: %d\n", i);
        i--;
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
