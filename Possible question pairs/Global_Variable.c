#include <stdio.h>
int var;
void Obf()
{
    printf("%d\n", var);
}

void Trns()
{
    var = 0;
    printf("%d\n", var);
}

int main()
{
    Obf();
    Trns();
}

