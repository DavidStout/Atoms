#include <stdio.h>

void string_literal_C(){
    int V1 = 2;
    printf("%c\n", "abcd"[V1]);
}

void string_literal_NC(){
    char *V1 = "abcd";
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal2_C(){
    int V1 = 2;  
    printf("%c\n", "1234"[V1]);
}

void string_literal2_NC(){
    char *V1 = "1234";
    int V2 = 2;
    printf("%c\n", V1[V2]);
}

void string_literal3_C(){
    int V1 = 2;
    printf("%c\n", "1a6b"[V1]);
}

void string_literal3_NC(){
    char *V1 = "1a6b";
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
