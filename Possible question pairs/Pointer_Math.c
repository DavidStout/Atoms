#include <stdio.h>

void Obf()
{
    char *var = 1 + "zy";
    printf("%s\n", var);
}

void Trns()
{
    char *var = &"zy"[1];
    printf("%s\n", var);
}

int main()
{
    Obf();
    Trns();
}

