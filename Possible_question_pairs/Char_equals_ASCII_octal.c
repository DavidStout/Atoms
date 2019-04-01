#include <stdio.h>

void char_equals_ASCII_octal_C1(){
    char V1 = 'B';
    char V2 = 'D';
    int V3 = V2 - V1;
    printf("%o\n", V3);
}

void char_equals_ASCII_octal_NC1(){
    char V1 = 0102;
    char V2 = 0104;
    int V3 = V2-V1;
    printf("%o\n", V3);
}

void char_equals_ASCII_octal_C2(){
    char V1 = '3';
    char V2 = '5';
    int V3 = V2 - V1;
    printf("%o\n", V3);
}

void char_equals_ASCII_octal_NC2(){
    char V1 = 063;
    char V2 = 065;
    int V3 = V2-V1;
    printf("%o\n", V3);
}

void char_equals_ASCII_octal_C3(){
    char V1 = 'e';
    char V2 = 'f';
    int V3 = V2 - V1;
    printf("%o\n", V3);
}

void char_equals_ASCII_octal_NC3(){
    char V1 = 0145;
    char V2 = 0146;
    int V3 = V2-V1;
    printf("%o\n", V3);
}


int main()
{
    printf("a:");
    char_equals_ASCII_octal_C1();
    char_equals_ASCII_octal_NC1();
    printf("b:");
    char_equals_ASCII_octal_C2();
    char_equals_ASCII_octal_NC2();
    printf("c:");
    char_equals_ASCII_octal_C3();
    char_equals_ASCII_octal_NC3();
}
