#include <stdio.h>

void pointer_math_C()
{
    char *var = 1 + "zy";
    printf("%s\n", var);
}
void pointer_math2_C()
{
    char *var = 1 + "54";
    printf("%s\n", var);
}
void pointer_math3_C()
{
    char *var = 1 + "68";
    printf("%s\n", var);
}

void pointer_math_NC()
{
    char var[2] = {'z','y'};
	char var2 = var[1];
    printf("%c\n", var2);
}
void pointer_math2_NC()
{
    char var[2] = {'5','4'};
	char var2 = var[1];
    printf("%c\n", var2);
}
void pointer_math3_NC()
{
    char var[2] = {'6','8'};
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