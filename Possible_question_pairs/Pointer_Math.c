#include <stdio.h>

void pointer_math_C()
{
    char *var = 1 + "zy";
	char var2 = *var;
    printf("%c\n", var2);
}

void pointer_math_NC()
{
    char var[3] = {'z','y', 0};
	char var2 = var[1];
    printf("%c\n", var2);
}

void pointer_math2_C()
{
    char *var = 1 + "54";
    char var2 = *var;
    printf("%c\n", var2);
}

void pointer_math2_NC()
{
    char var[3] = {'5','4', 0};
	char var2 = var[1];
    printf("%c\n", var2);
}

void pointer_math3_C()
{
    char *var = 1 + "68";
    char var2 = *var;
    printf("%c\n", var2);
}

void pointer_math3_NC()
{
    char var[3] = {'6','8', 0};
	char var2 = var[1];
    printf("%c\n", var2);
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