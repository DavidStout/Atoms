#include <stdio.h>

void multiplication_assignment_C1(){
    int V1 = 8;
    int V2 = 2;
    V1 *= V2;
    printf("%d\n", V1);
}

void multiplication_assignment_NC1(){
    int V1 = 8*2;
    printf("%d\n", V1);
}

void multiplication_assignment_C2(){
    int V1 = 6;
    int V2 = 3;
    V1 *= V2;
    printf("%d\n", V1);
}

void multiplication_assignment_NC2(){
    int V1 = 6*3;
    printf("%d\n", V1);
}

void multiplication_assignment_C3(){
    int V1 = 10;
    int V2 = 2;
    V1 *= V2;
    printf("%d\n", V1);
}

void multiplication_assignment_NC3(){
    int V1 = 10*2;
    printf("%d\n", V1);
}
int main(){
    printf("a:");
    multiplication_assignment_C1();
    multiplication_assignment_NC1();
    printf("b:");
    multiplication_assignment_C2();
    multiplication_assignment_NC2();
    printf("c:");
    multiplication_assignment_C3();
    multiplication_assignment_NC3();  
}
