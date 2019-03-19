#include <stdio.h>

void division_assignment_C(){
    int V1 = 8;
    int V2 = 2;
    V1 /= V2;
    printf("%d\n", V1);
}

void division_assignment_NC(){
    int V1 = 8/2;
    printf("%d\n", V1);
}

void division_assignment2_C(){
    int V1 = 6;
    int V2 = 3;
    V1 /= V2;
    printf("%d\n", V1);
}

void division_assignment2_NC(){
    int V1 = 6/3;
    printf("%d\n", V1);
}

void division_assignment3_C(){
    int V1 = 10;
    int V2 = 2;
    V1 /= V2;
    printf("%d\n", V1);
}

void division_assignment3_NC(){
    int V1 = 10/2;
    printf("%d\n", V1);
}
int main(){
    printf("a:");
    division_assignment_C();
    division_assignment_NC();
    printf("b:");
    division_assignment2_C();
    division_assignment2_NC();
    printf("c:");
    division_assignment3_C();
    division_assignment3_NC();  
}
