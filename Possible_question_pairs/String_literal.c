#include <stdio.h>

void string_literal_C()
{
	char *var = "abcd";
    printf("%c\n", var[2]);
}

void string_literal_NC()
{
    char var[5] = "abcd";
    printf("%c\n", var[2]);
}

void string_literal2_C()
{
	char *var = "1234";
    printf("%c\n", var[2]);
}

void string_literal2_NC()
{
    char var[5] = {'1','2','3','4', 0};
    printf("%c\n", var[2]);
}

void string_literal3_C()
{
	char *var = "1a6b";
    printf("%c\n", var[2]);
}

void string_literal3_NC()
{
    char var[5];
	var[0] = '1';
	var[1] = 'a';
	var[2] = '6';
	var[3] = 'b';
	var[4] = 0;
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
