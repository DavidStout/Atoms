#include <stdio.h>

void for_loop_cond_C(){
    int V1 = 0;
    for(;V1 != 1;){    
        printf("%d\n", V1);
        V1 = V1 + 1;
    }
}

void for_loop_cond_NC(){
    for(int V1 = 0; V1 != 1; V1 = V1 + 1){
        printf("%d\n", V1);
    }
}

void for_loop_cond2_C(){
    int V1 = 0;
    for(;V1 <= 0;){    
        printf("%d\n", V1);
        V1 = V1 + 1;
    }
}

void for_loop_cond2_NC(){
    for(int V1 = 0; V1 <= 0; V1 = V1 + 1){
        printf("%d\n", V1);
    }
}

void for_loop_cond3_C(){
    int V1 = 0;
    for(;V1 < 1;){    
        printf("%d\n", V1);
        V1 = V1 + 1;
    }
}

void for_loop_cond3_NC(){
    for(int V1 = 0; V1 < 1; V1 = V1 + 1){
        printf("%d\n", V1);
    }
}

int main(){
    printf("a: ");
    for_loop_cond_C();
    for_loop_cond_NC();
    printf("b: ");
    for_loop_cond2_C();
    for_loop_cond2_NC();
    printf("c: ");
    for_loop_cond3_C();
    for_loop_cond3_NC();
}

