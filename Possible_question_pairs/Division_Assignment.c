#include <stdio.h>

void division_assignment_C(){
    int var = 8;
    int var2 = 2;
    var /= var2;
    printf("%d\n", var);
}

void division_assignment_NC(){
    int var = 8/2;
    printf("%d\n", var);
}

void division_assignment2_C(){
    int var = 6;
    int var2 = 3;
    var /= var2;
    printf("%d\n", var);
}

void division_assignment2_NC(){
    int var = 6/3;
    printf("%d\n", var);
}

void division_assignment3_C(){
    int var = 10;
    int var2 = 2;
    var /= var2;
    printf("%d\n", var);
}

void division_assignment3_NC(){
    int var = 10/2;
    printf("%d\n", var);
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
