#include <stdio.h>

void string_literal_C()
{
    printf("%c\n", "abcd"[2]);
}
void string_literal2_C()
{
    printf("%c\n", "1234"[2]);
}
void string_literal3_C()
{
    printf("%c\n", "1a6b"[2]);
}

void string_literal_NC()
{
    char var[4] = "abcd";
    printf("%c\n", var[2]);
}
void string_literal2_NC()
{
    char var[4] = "1234";
    printf("%c\n", var[2]);
}
void string_literal3_NC()
{
    char var[4] = "1a6b";
    printf("%c\n", var[2]);
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
