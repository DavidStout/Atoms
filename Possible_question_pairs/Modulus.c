#include <stdio.h>

void modulus_C1(){
    int V1 = 8;
    int V2 = 3;
    int V3 = V1 % V2;
    printf("%d\n", V3);
}

void modulus_NC1(){
    int V1 = 8;
    int V2 = 3;
    while(V1 > V2){
        V1 = V1 - V2;
    }
    printf("%d\n", V1);
}

void modulus_C2(){
    int V1 = 10;
    int V2 = 3;
    int V3 = V1 % V2;
    printf("%d\n", V3);
}

void modulus_NC2(){
    int V1 = 10;
    int V2 = 3;
    while(V1 > V2){
        V1 = V1 - V2;
    }
    printf("%d\n", V1);
}

void modulus_C3(){
    int V1 = 8;
    int V2 = 5;
    int V3 = V1 % V2;
    printf("%d\n", V3);
}

void modulus_NC3(){
    int V1 = 8;
    int V2 = 5;
    while(V1 > V2){
        V1 = V1 - V2;
    }
    printf("%d\n", V1);
}

int main(){
    printf("a:");
    modulus_C1();
    modulus_NC1();
    printf("b:");
    modulus_C2();
    modulus_NC2();
    printf("c:");
    modulus_C3();
    modulus_NC3();  
}
