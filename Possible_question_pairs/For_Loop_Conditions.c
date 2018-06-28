#include <stdio.h>

void for_loop_cond_C()
{
    int var = 0;
    for(;var != 1;)
    {    
        printf("%d\n", var);
        var = var + 1;
    }
}

void for_loop_cond2_C()
{
    char var = 'a';
    for(;var != 'b';)
    {    
        printf("%c\n", var);
        var = var + 1;
    }
}

void for_loop_cond3_C()
{
    float var = 0;
    for(;var != 1;)
    {    
        printf("%f\n", var);
        var = var + 1;
    }
}

void for_loop_cond_NC()
{
    for(int var = 0; var != 1; var++)
    {
        printf("%d\n", var);
    }
}

void for_loop_cond2_NC()
{
    for(char var = 'a'; var != 'b'; var++)
    {
        printf("%c\n", var);
    }
}

void for_loop_cond3_NC()
{
    for(float var = 0; var != 1; var++)
    {
        printf("%f\n", var);
    }
}

int main()
{
	printf("a: ");
    for_loop_cond_C();
    for_loop_cond_NC();
	printf("b: ");
    for_loop_cond2_C();
    for_loop_cond2_NC();
	printf("c: ");
    for_loop_cond3_C();
    for_loop_cond3_NC();
}

