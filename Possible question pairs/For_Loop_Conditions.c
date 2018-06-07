#include <stdio.h>

void Obf()
{
    int var = 0;
    for(;var != 1;)
    {    
        printf("%d\n", var);
        var = var + 1;
    }
}

void Trns()
{
    for(int var = 0; var != 1; var++)
    {
        printf("%d\n", var);
    }
}

int main()
{
    Obf();
    Trns();
}

