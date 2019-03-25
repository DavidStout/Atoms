#include <stdio.h>

int V1;
int V2 = 0;
float V3;
float V4 = 0.0;
double V5;
double V6 = 0.0;

void global_variable_C(){
    printf("%d\n", V1);
}

void global_variable_NC(){
    printf("%d\n", V2);
}

void global_variable2_C(){
    printf("%f\n", V3);
}

void global_variable2_NC(){
    printf("%f\n", V4);
}

void global_variable3_C(){
    printf("%f\n", V5);
}

void global_variable3_NC(){
    printf("%f\n", V6);
}

int main(){
    printf("a:");
    global_variable_C();
    global_variable_NC();
    printf("b:");
    global_variable2_C();
    global_variable2_NC();
    printf("c:");
    global_variable3_C();
    global_variable3_NC();
}
