#include <stdio.h>

void pointer_math_C(){
    char *V1 = 1 + "zy";
    char V2 = *V1;
    printf("%c\n", V2);
}

void pointer_math_NC(){
    char V1[3] = {'z','y', 0};
    char V2 = V1[1];
    printf("%c\n", V2);
}

void pointer_math2_C(){
    char *V1 = 1 + "54";
    char V2 = *V1;
    printf("%c\n", V2);
}

void pointer_math2_NC(){
    char V1[3] = {'5','4', 0};
    char V2 = V1[1];
    printf("%c\n", V2);
}

void pointer_math3_C(){
    char *V1 = 1 + "68";
    char V2 = *V1;
    printf("%c\n", V2);
}

void pointer_math3_NC(){
    char V1[3] = {'6','8', 0};
    char V2 = V1[1];
    printf("%c\n", V2);
}

int main(){
    printf("a:");
    pointer_math_C();
    pointer_math_NC();
    printf("b:");
    pointer_math2_C();
    pointer_math2_NC();
    printf("c:");
    pointer_math3_C();
    pointer_math3_NC();
}
