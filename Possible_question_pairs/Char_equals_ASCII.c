#include <stdio.h>

void char_equals_ASCII_C1(){
    char V1 = 'B';
    char V2 = 'D';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_NC1(){
    char V1 = 66;
    char V2 = 68;
    int V3 = V2-V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_C2(){
    char V1 = '3';
    char V2 = '5';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_NC2(){
    char V1 = 51;
    char V2 = 53;
    int V3 = V2-V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_C3(){
    char V1 = 'e';
    char V2 = 'f';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_NC3(){
    char V1 = 101;
    char V2 = 102;
    int V3 = V2-V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_C4(){
    char V1 = 'A';
    char V2 = 'B';
    int V3 = V2 - V1;
    printf("%o\n", V3);
}

void char_equals_ASCII_NC4(){
    char V1 = 101;
    char V2 = 102;
    int V3 = V2-V1;
    printf("%o\n", V3);
}

void char_equals_ASCII_C5(){
    char V1 = 'M';
    char V2 = 'N';
    int V3 = V2 - V1;
    printf("%X\n", V3);
}

void char_equals_ASCII_NC5(){
    char V1 = 0x4D;
    char V2 = 0x4E;
    int V3 = V2-V1;
    printf("%X\n", V3);
}
int main()
{
    printf("a: ");
    char_equals_ASCII_C1();
    char_equals_ASCII_NC1();
    printf("b:");
    char_equals_ASCII_C2();
    char_equals_ASCII_NC2();
    printf("c:");
    char_equals_ASCII_C3();
    char_equals_ASCII_NC3();
    printf("d:");
    char_equals_ASCII_C4();
    char_equals_ASCII_NC4();
    printf("e:");
    char_equals_ASCII_C5();
    char_equals_ASCII_NC5();
}
