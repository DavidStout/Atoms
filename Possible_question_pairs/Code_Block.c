#include <stdio.h>

void Code_Block_C1(){
    {
        if(1){
            printf("b");
        }
        printf("b");
    }
}

void Code_Block_NC1(){
    if(1){
        printf("a");    
    }
    printf("a");
}

void Code_Block_C2(){
    {
        if(0){
            printf("b");
        }
        printf("b");
    }
}

void Code_Block_NC2(){
    if(0){
        printf("a");    
    }
    printf("a");
}

void Code_Block_C3(){
    {
        if(1){
            printf("b");
            if(0){
                printf("b");
            }
            printf("b");
        }
        printf("b");
    }
}

void Code_Block_NC3(){
    if(1){
        printf("a");
		if(0){
            printf("a");
		    }
        printf("a");    
    }
    printf("a");
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
