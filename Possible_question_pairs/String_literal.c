#include <stdio.h>

void string_literal_C()
{
    char var[4] = "abcd";
    printf("%c\n", var[2]);
}
void string_literal2_C()
{
    char var[4] = "1234";
    printf("%c\n", var[2]);
}
void string_literal3_C()
{
    char var[4] = "1a6b";
    printf("%c\n", var[2]);
}

void string_literal_NC()
{
    char var[4];
	var[0] = 'a';
	var[1] = 'b';
	var[2] = 'c';
	var[3] = 'd';
    printf("%c\n", var[2]);
}
void string_literal2_NC()
{
    char var[4];
	var[0] = '1';
	var[1] = '2';
	var[2] = '3';
	var[3] = '4';
    printf("%c\n", var[2]);
}
void string_literal3_NC()
{
    char var[4];
	var[0] = '1';
	var[1] = 'a';
	var[2] = '6';
	var[3] = 'b';
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
