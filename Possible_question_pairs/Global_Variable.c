#include <stdio.h>

int var;
float var2;
char var3;

void global_variable_C()
{
    printf("%d\n", var);
}

void global_variable2_C()
{
    printf("%f\n", var2);
}

void global_variable3_C()
{
    printf("%f\n", var3);
}

void global_variable_NC()
{
    var = 0;
    printf("%d\n", var);
}

void global_variable2_NC()
{
    var2 = 0;
    printf("%f\n", var);
}

void global_variable3_NC()
{
    var3 = 0;
    printf("%f\n", var);
}

int main()
{
    printf("a:");
    global_variable_C();
    global_variable_NC();
    printf("b:");
    global_variable2_C();
    global_variable2_NC();
    printf("c:");
    global_variable3_C();
    global_variable3_NC();
}

