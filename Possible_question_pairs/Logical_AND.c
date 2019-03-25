#include <stdio.h>

void logical_AND_C1(){
    int V1 = 1;
    int V2 = 1;
    if((V1 == 1)&&(V2 == 1)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}

void logical_AND_NC1(){
    int V1 = 1;
    int V2 = 1;
    if(V1 == 1){
        if(V2 == 1){
            printf("True\n");
        }
        else{
            printf("False 1\n");
        }
    }
    else{
        printf("False 2\n");
    }
}

void logical_AND_C2(){
    int V1 = 1;
    int V2 = 1;
    if((V1 == 2)&&(V2 == 1)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}

void logical_AND_NC2(){
    int V1 = 1;
    int V2 = 1;
    if(V1 == 2){
        if(V2 == 1){
            printf("True\n");
        }
        else{
            printf("False 1\n");
        }
    }
    else{
        printf("False 2\n");
    }
}

void logical_AND_C3(){
    int V1 = 1;
    int V2 = 1;
    if((V1 < 1)&&(V2 > 1)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}

void logical_AND_NC3(){
    int V1 = 1;
    int V2 = 1;
    if(V1 < 1){
        if(V2 > 1){
            printf("True\n");
        }
        else{
            printf("False 1\n");
        }
    }
    else{
        printf("False 2\n");
    }
}

int main(void){
    logical_AND_C1();
    logical_AND_NC1();
    logical_AND_C2();
    logical_AND_NC2();
    logical_AND_C3();
    logical_AND_NC3();
}
