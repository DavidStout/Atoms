#include <stdio.h>

void char_equals_ASCII_int_C1(){
    char V1 = 'B';
    char V2 = 'D';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_int_NC1(){
    char V1 = 66;
    char V2 = 68;
    int V3 = V2-V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_int_C2(){
    char V1 = '3';
    char V2 = '5';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_int_NC2(){
    char V1 = 51;
    char V2 = 53;
    int V3 = V2-V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_int_C3(){
    char V1 = 'e';
    char V2 = 'f';
    int V3 = V2 - V1;
    printf("%d\n", V3);
}

void char_equals_ASCII_int_NC3(){
    char V1 = 101;
    char V2 = 102;
    int V3 = V2-V1;
    printf("%d\n", V3);
}


int main()
{
    printf("a: ");
    char_equals_ASCII_int_C1();
    char_equals_ASCII_int_NC1();
    printf("b:");
    char_equals_ASCII_int_C2();
    char_equals_ASCII_int_NC2();
    printf("c:");
    char_equals_ASCII_int_C3();
    char_equals_ASCII_int_NC3();
}
