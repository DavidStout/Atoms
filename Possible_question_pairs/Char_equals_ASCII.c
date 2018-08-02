#include <stdio.h>

void char_equals_ASCII_C()
{
    char var = 'B';
	char var2 = 'D';
	int var3 = var2 - var;
    printf("%d\n", var3);
}

void char_equals_ASCII_NC()
{
    char var = 66;
	char var2 = 68;
	int var3 = var2-var;
    printf("%d\n", var3);
}

void char_equals_ASCII2_C()
{
    char var = 97;
	printf("%c\n", var);
}

void char_equals_ASCII2_NC()
{
    char var = 'a';
	printf("%c\n", var);
}

void char_equals_ASCII3_C()
{
    char var = 97;
	char var2 = var + 1;
	printf("%c\n", var2);
}

void char_equals_ASCII3_NC()
{
    char var = 'a';
	char var2 = var + 1;
	printf("%c\n", var2);
}

int main()
{
    printf("a: ");
    char_equals_ASCII_C();
    char_equals_ASCII_NC();
    printf("b:");
	char_equals_ASCII2_C();
    char_equals_ASCII2_NC();
	printf("c:");
	char_equals_ASCII3_C();
    char_equals_ASCII3_NC();
}