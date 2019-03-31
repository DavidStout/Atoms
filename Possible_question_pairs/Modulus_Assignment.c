#include <stdio.h>

void modulus_assignment_C1(){
    int V1 = 8;
    int V2 = 5;
    V1 %= V2;
    printf("%d\n", V1);
}

void modulus_assignment_NC1(){
    int V1 = 8%5;
    printf("%d\n", V1);
}

void modulus_assignment_C2(){
    int V1 = 6;
    int V2 = 4;
    V1 %= V2;
    printf("%d\n", V1);
}

void modulus_assignment_NC2(){
    int V1 = 6%4;
    printf("%d\n", V1);
}

void modulus_assignment_C3(){
    int V1 = 10;
    int V2 = 2;
    V1 %= V2;
    printf("%d\n", V1);
}

void modulus_assignment_NC3(){
    int V1 = 10%2;
    printf("%d\n", V1);
}
int main(){
    printf("a:");
    modulus_assignment_C1();
    modulus_assignment_NC1();
    printf("b:");
    modulus_assignment_C2();
    modulus_assignment_NC2();
    printf("c:");
    modulus_assignment_C3();
    modulus_assignment_NC3();  
}
