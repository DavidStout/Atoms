#include <stdio.h>

void F1(int V1){
    printf("b: %d\n", V1);
}

void recursion_C1(int V2){
    if(V2 < 2){
        printf("a: %d\n", V2);
        V2++;
        recursion_C1(V2);
    }
}

void recursion_NC1(int V2){
    while(V2 < 2){
        F1(V2);
        V2++;
    }
}

void recursion_C2(int V2){
    if(V2 <= 2){
        printf("c: %d\n", V2);
        V2++;
        recursion_C2(V2);
    }
}

void recursion_NC2(int V2){
    while(V2 <= 2){
        F1(V2);
        V2++;
    }
}


void recursion_C3(int V2){
    if(V2 > 0){
        printf("e: %d\n", V2);
        V2--;
        recursion_C3(V2);
    }
}

void recursion_NC3(int V2){
    while(V2 > 0){
        F1(V2);
        V2--;
    }
}

int main(void){
    recursion_C1(0);
    recursion_NC1(0);
    recursion_C2(1);
    recursion_NC2(1);
    recursion_C3(2);
    recursion_NC3(2);
}
