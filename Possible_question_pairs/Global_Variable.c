#include <stdio.h>

int V1;
int V1_NC = 0;
float V2;
float V2_NC = 0.0;
char V3;
char V3_NC = 0;

void global_variable_C(){
    printf("%d\n", V1);
}

void global_variable_NC(){
    printf("%d\n", V1_NC);
}

void global_variable2_C(){
    printf("%f\n", V2);
}

void global_variable2_NC(){
    printf("%f\n", V2_NC);
}

void global_variable3_C(){
    printf("%d\n", V3);
}

void global_variable3_NC(){
    printf("%d\n", V3_NC);
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
