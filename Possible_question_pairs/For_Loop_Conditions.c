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

void for_loop_cond_NC()
{
    for(int var = 0; var != 1; var = var + 1)
    {
        printf("%d\n", var);
    }
}

void for_loop_cond2_C()
{
    int var = 0;
    for(;var <= 0;)
    {    
        printf("%d\n", var);
        var = var + 1;
    }
}

void for_loop_cond2_NC()
{
    for(int var = 0; var <= 0; var = var + 1)
    {
        printf("%d\n", var);
    }
}

void for_loop_cond3_C()
{
    int var = 0;
    for(;var < 1;)
    {    
        printf("%d\n", var);
        var = var + 1;
    }
}

void for_loop_cond3_NC()
{
    for(int var = 0; var < 1; var = var + 1)
    {
        printf("%d\n", var);
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

