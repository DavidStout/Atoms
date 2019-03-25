#include <stdio.h>

void Code_Block_C1(){
    {
        printf("a");
    }
    printf("b");
}

void Code_Block_NC1(){
    printf("a");    
    printf("b");
}

void Code_Block_C2(){
    if(1){
        printf("a");
    }
    printf("b");
}

void Code_Block_NC2(){
    printf("a");    
    printf("b");
}

void Code_Block_C3(){
    if(0){
        printf("a");
    }
    printf("b");
}

void Code_Block_NC3(){
    printf("a");
    printf("b");
}

int main(void){
    Code_Block_C1();
    Code_Block_NC1();
    printf("\n");
    Code_Block_C2();
    Code_Block_NC2();
    printf("\n");
    Code_Block_C3();
    Code_Block_NC3();
}
