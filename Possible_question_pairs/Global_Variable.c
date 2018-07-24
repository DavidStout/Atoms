#include <stdio.h>

int var;
int var_NC = 0;
float var2;
float var2_NC = 0.0;
char var3;
char var3_NC = 0;

void global_variable_C()
{
    printf("%d\n", var);
}

void global_variable_NC()
{
    printf("%d\n", var_NC);
}

void global_variable2_C()
{
    printf("%f\n", var2);
}

void global_variable2_NC()
{
    printf("%f\n", var2_NC);
}

void global_variable3_C()
{
    printf("%d\n", var3);
}

void global_variable3_NC()
{
    printf("%d\n", var3_NC);
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