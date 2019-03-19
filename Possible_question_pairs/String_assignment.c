#include <stdio.h>

void string_literal_C(){
    char *V1 = "abcd";
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal_NC(){
    char V1[5] = {'a', 'b', 'c', 'd', 0};
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal2_C(){
    char *V1 = "1234";
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal2_NC(){
    char V1[5] = {'1', '2', '3', '4', 0};
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal3_C(){
    char *V1 = "1a6b";
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal3_NC(){
    char V1[5] = {'1', 'a', '6', 'b', 0};
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

int main(){
    printf("a:");
    string_literal_C();
    string_literal_NC();
    printf("b:");
    string_literal2_C();
    string_literal2_NC();
    printf("c:");
    string_literal3_C();
    string_literal3_NC();
}
