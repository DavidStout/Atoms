#include <stdio.h>

void string_literal_C()
{
	int var = 2;
    printf("%c\n", "abcd"[var]);
}

void string_literal_NC()
{
	char *var = "abcd";
    int var2 = 2;
	printf("%c\n", var[var2]);
}

void string_literal2_C()
{
	int var = 2;
    printf("%c\n", "1234"[var]);
}

void string_literal2_NC()
{
	char *var = "1234";
    int var2 = 2;
	printf("%c\n", var[var2]);
}

void string_literal3_C()
{
	int var = 2;
    printf("%c\n", "1a6b"[var]);
}

void string_literal3_NC()
{
	char *var = "1a6b";
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
