#include <stdio.h>

void for_loop_condition_C1(){
    int V1 = 0;
    for(;V1 != 1;){    
        printf("%d ", V1);
        V1 = V1 + 1;
    }
}

void for_loop_condition_NC1(){
    for(int V1 = 0; V1 != 1; V1 = V1 + 1){
        printf("%d ", V1);
    }
}

void for_loop_condition_C2(){
    int V1 = 0;
    for(;V1 <= 0;){    
        printf("%d ", V1);
        V1 = V1 + 1;
    }
}

void for_loop_condition_NC2(){
    for(int V1 = 0; V1 <= 0; V1 = V1 + 1){
        printf("%d ", V1);
    }
}

void for_loop_condition_C3(){
    int V1 = 0;
    for(;V1 < 1;){    
        printf("%d ", V1);
        V1 = V1 + 1;
    }
}

void for_loop_condition_NC3(){
    for(int V1 = 0; V1 < 1; V1 = V1 + 1){
        printf("%d ", V1);
    }
}

int main(){
    printf("a: ");
    for_loop_condition_C1();
    for_loop_condition_NC1();
    printf("\nb: ");
    for_loop_condition_C2();
    for_loop_condition_NC2();
    printf("\nc: ");
    for_loop_condition_C3();
    for_loop_condition_NC3();
}

