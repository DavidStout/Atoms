#include <stdio.h>

void logical_AND_C1(int V1, int V2){
    if((V1 == 1)&&(V2 == 1)){
        printf("True\n");
    }
    else
        printf("false\n");
}

void logical_AND_NC1(int V1, int V2){
    if(V1 == 1){
        if(V2 == 1){
            printf("True\n");
        }
        else
            printf("false\n");
    }
    else
        printf("false\n");
}

void logical_AND_C2(int V1, int V2){
    if((V1 == 2)&&(V2 == 1)){
        printf("True\n");
    }
    else
        printf("false\n");
}

void logical_AND_NC2(int V1, int V2){
    if(V1 == 2){
        if(V2 == 1){
            printf("True\n");
        }
        else
            printf("false\n");
    }
    else
        printf("false\n");
}

void logical_AND_C3(int V1, int V2){
    if((V1 < 1)&&(V2 > 1)){
        printf("True\n");
    }
    else
        printf("false\n");
}

void logical_AND_NC3(int V1, int V2){
    if(V1 < 1){
        if(V2 > 1){
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
