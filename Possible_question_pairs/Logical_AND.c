#include <stdio.h>

void logical_AND_C1(int i, int j){
    if((i == 1)&&(j == 1)){
        printf("True\n");
    }
    else
        printf("false\n");
}

void logical_AND_NC1(int i, int j){
    if(i == 1){
        if(j == 1){
            printf("True\n");
        }
        else
            printf("false\n");
    }
    else
        printf("false\n");
}

void logical_AND_C2(int i, int j){
    if((i == 2)&&(j == 1)){
        printf("True\n");
    }
    else
        printf("false\n");
}

void logical_AND_NC2(int i, int j){
    if(i == 2){
        if(j == 1){
            printf("True\n");
        }
        else
            printf("false\n");
    }
    else
        printf("false\n");
}

void logical_AND_C3(int i, int j){
    if((i < 1)&&(j > 1)){
        printf("True\n");
    }
    else
        printf("false\n");
}

void logical_AND_NC3(int i, int j){
    if(i < 1){
        if(j > 1){
            printf("True\n");
        }
        else
            printf("false\n");
    }
    else
        printf("false\n");
}
int main(void){
    logical_AND_C1(1,1);
    logical_AND_NC1(1,1);
    logical_AND_C2(1,1);
    logical_AND_NC2(1,1);
    logical_AND_C3(1,1);
    logical_AND_NC3(1,1);
}
