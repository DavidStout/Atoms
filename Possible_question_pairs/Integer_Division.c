#include <stdio.h>

void integer_division_C1(){
    int V1 = 8/3;
    printf("%d\n", V1);
}

void integer_division_NC1(){
    int V1 = 8;
    int V2 = 3;
    int V3 = 0;
    while (V1 > V2){
        V1 = V1 - V2;
        V3 = V3 + 1;
    }
    printf("%d\n", V3);
}

void integer_division_C2(){
    int V1 = 9/2;
    printf("%d\n", V1);
}

void integer_division_NC2(){
    int V1 = 9;
    int V2 = 2;
    int V3 = 0;
    while (V1 > V2){
        V1 = V1 - V2;
        V3 = V3 + 1;
    }
    printf("%d\n", V3);
}

void integer_division_C3(){
    int V1 = 10/4;
    printf("%d\n", V1);
}

void integer_division_NC3(){
    int V1 = 10;
    int V2 = 4;
    int V3 = 0;
    while (V1 > V2){
        V1 = V1 - V2;
        V3 = V3 + 1;
    }
    printf("%d\n", V3);
}

int main(){
    printf("a:");
    integer_division_C1();
    integer_division_NC1();
    printf("b:");
    integer_division_C2();
    integer_division_NC2();
    printf("c:");
    integer_division_C3();
    integer_division_NC3();
}
