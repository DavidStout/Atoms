#include <stdio.h>

void modulus_C(){
    int V1 = 8;
    int V2 = 3;
    int V3 = V1 % V2;
    printf("%d\n", V3);
}

void modulus_NC(){
    int V1 = 8;
    int V2 = 3;
    int V3 = V1 - (V1/V2)*V2;
    printf("%d\n", V3);
}

void modulus2_C(){
    int V1 = 10;
    int V2 = 3;
    int V3 = V1 % V2;
    printf("%d\n", V3);
}

void modulus2_NC(){
    int V1 = 10;
    int V2 = 3;
    int V3 = V1 - (V1/V2)*V2;
    printf("%d\n", V3);
}

void modulus3_C(){
    int V1 = 8;
    int V2 = 5;
    int V3 = V1 % V2;
    printf("%d\n", V3);
}

void modulus3_NC(){
    int V1 = 8;
    int V2 = 5;
    int V3 = V1 - (V1/V2)*V2;
    printf("%d\n", V3);
}

int main(){
    printf("a:");
    modulus_C();
    modulus_NC();
    printf("b:");
    modulus2_C();
    modulus2_NC();
    printf("c:");
    modulus3_C();
    modulus3_NC();  
}
