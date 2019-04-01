#include <stdio.h>

void char_equals_ASCII_hex_C1(){
    char V1 = 'B';
    char V2 = 'D';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_hex_NC1(){
    char V1 = 0x42;
    char V2 = 0x44;
    int V3 = V2-V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_hex_C2(){
    char V1 = '3';
    char V2 = '5';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_hex_NC2(){
    char V1 = 0x33;
    char V2 = 0x35;
    int V3 = V2-V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_hex_C3(){
    char V1 = 'e';
    char V2 = 'f';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_hex_NC3(){
    char V1 = 0x65;
    char V2 = 0x66;
    int V3 = V2-V1;
    printf("%d\n", V3);
}


int main()
{
    printf("a:");
    char_equals_ASCII_hex_C1();
    char_equals_ASCII_hex_NC1();
    printf("b:");
    char_equals_ASCII_hex_C2();
    char_equals_ASCII_hex_NC2();
    printf("c:");
    char_equals_ASCII_hex_C3();
    char_equals_ASCII_hex_NC3();
}
