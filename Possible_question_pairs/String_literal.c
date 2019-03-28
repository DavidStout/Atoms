#include <stdio.h>

void string_literal_C1(){
    int V1 = 2;
    printf("%c\n", "abcd"[V1]);
}

void string_literal_NC1(){
    char *V1 = "abcd";
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal_C2(){
    int V1 = 2;  
    printf("%c\n", "1234"[V1]);
}

void string_literal_NC2(){
    char *V1 = "1234";
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal_C3(){
    int V1 = 2;
    printf("%c\n", "1a6b"[V1]);
}

void string_literal_NC3(){
    char *V1 = "1a6b";
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

int main(){
    printf("a:");
    string_literal_C1();
    string_literal_NC1();
    printf("b:");
    string_literal_C2();
    string_literal_NC2();
    printf("c:");
    string_literal_C3();
    string_literal_NC3();
}
