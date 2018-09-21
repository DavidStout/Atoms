#include <stdio.h>

void modulus_C()
{
    int var = 8;
    int var2 = 3;
    int var3 = var % var2;
    printf("%d\n", var3);
}

void modulus_NC()
{
    int var = 8;
    int var2 = 3;
    int var3 = var - (var/var2)*var2;
    printf("%d\n", var3);
}

void modulus2_C()
{
    int var = 10;
    int var2 = 3;
    int var3 = var % var2;
    printf("%d\n", var3);
}

void modulus2_NC()
{
    int var = 10;
    int var2 = 3;
    int var3 = var - (var/var2)*var2;
    printf("%d\n", var3);
}

void modulus3_C()
{
    int var = 8;
    int var2 = 5;
    int var3 = var % var2;
    printf("%d\n", var3);
}

void modulus3_NC()
{
    int var = 8;
    int var2 = 5;
    int var3 = var - (var/var2)*var2;
    printf("%d\n", var3);
}

int main()
{
    printf("a:");
    modulus_C();
    modulus_NC();
    printf("b:");
    modulus2_C();
    modulus2_NC();
	printf("c:");
    modulus3_C();
    modulus3_NC();  
}
