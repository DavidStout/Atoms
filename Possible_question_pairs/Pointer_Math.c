#include <stdio.h>

void pointer_math_C1(){
    char *V1 = 1 + "93";
    char V2 = *V1;
    printf("%c\n", V2);
}

void pointer_math_NC1(){
    char V1[3] = {'9','3', 0};
    char V2 = V1[1];
    printf("%c\n", V2);
}

void pointer_math_C2(){
    char *V1 = 1 + "54";
    char V2 = *V1;
    printf("%c\n", V2);
}

void pointer_math_NC2(){
    char V1[3] = {'5','4', 0};
    char V2 = V1[1];
    printf("%c\n", V2);
}

void pointer_math_C3(){
    char *V1 = 1 + "68";
    char V2 = *V1;
    printf("%c\n", V2);
}

void pointer_math_NC3(){
    char V1[3] = {'6','8', 0};
    char V2 = V1[1];
    printf("%c\n", V2);
}

int main(){
    printf("a:");
    pointer_math_C1();
    pointer_math_NC1();
    printf("b:");
    pointer_math_C2();
    pointer_math_NC2();
    printf("c:");
    pointer_math_C3();
    pointer_math_NC3();
}
