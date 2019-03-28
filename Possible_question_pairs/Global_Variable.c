#include <stdio.h>

int V1;
int V2 = 0;
float V3;
float V4 = 0.0;
double V5;
double V6 = 0.0;

void global_variable_C1(){
    printf("%d\n", V1);
}

void global_variable_NC1(){
    printf("%d\n", V2);
}

void global_variable_C2(){
    printf("%f\n", V3);
}

void global_variable_NC2(){
    printf("%f\n", V4);
}

void global_variable_C3(){
    printf("%f\n", V5);
}

void global_variable_NC3(){
    printf("%f\n", V6);
}

int main(){
    printf("a:");
    global_variable_C1();
    global_variable_NC1();
    printf("b:");
    global_variable_C2();
    global_variable_NC2();
    printf("c:");
    global_variable_C3();
    global_variable_NC3();
}
