#include <stdio.h>

void pointer_math_C()
{
    char *var = 1 + "zy";
    printf("%s\n", var);
}
void pointer_math2_C()
{
    int *var = 1 + "54";
    printf("%s\n", var);
}
void pointer_math3_C()
{
    float *var = 1 + "68";
    printf("%s\n", var);
}

void pointer_math_NC()
{
    char *var = &"zy"[1];
    printf("%s\n", var);
}
void pointer_math2_NC()
{
    int *var = &"54"[1];
    printf("%s\n", var);
}
void pointer_math3_NC()
{
    float *var = &"68"[1];
    printf("%s\n", var);
}
int main()
{
    printf("a:");
    pointer_math_C();
    pointer_math_NC();
    printf("b:");
    pointer_math2_C();
    pointer_math2_NC();
    printf("c:");
    pointer_math3_C();
    pointer_math3_NC();
}