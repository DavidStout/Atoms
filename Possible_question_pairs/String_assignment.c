#include <stdio.h>

void string_literal_C()
{
	char *var = "abcd";
    int var2 = 2;
	printf("%c\n", var[var2]);
}

void string_literal_NC()
{
	char var[5] = {'a', 'b', 'c', 'd', 0};
    int var2 = 2;
	printf("%c\n", var[var2]);
}

void string_literal2_C()
{
	char *var = "1234";
    int var2 = 2;
	printf("%c\n", var[var2]);
}

void string_literal2_NC()
{
	char var[5] = {'1', '2', '3', '4', 0};
    int var2 = 2;
	printf("%c\n", var[var2]);
}

void string_literal3_C()
{
	char *var = "1a6b";
    int var2 = 2;
	printf("%c\n", var[var2]);
}

void string_literal3_NC()
{
	char var[5] = {'1', 'a', '6', 'b', 0};
    int var2 = 2;
	printf("%c\n", var[var2]);
}

int main()
{
    printf("a:");
    string_literal_C();
    string_literal_NC();
    printf("b:");
    string_literal2_C();
    string_literal2_NC();
    printf("c:");
    string_literal3_C();
    string_literal3_NC();
}