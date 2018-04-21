#include <stdio.h>
void F1(int V1, char *V2, int V3) {
   printf("a: %d %c %d\n", V1, *V2, V3); //user thinks %s prints as character of string
   int V4 = (V1 / V3) + V3;
   char **V5 = &V2 - V1;                  //user thinks V5 references V2 directly
   V2 = V2 - 1;
   int V6 = (int)V2 / (int)V2;
   printf("b: %d %c %d\n", V4, **V5, V6);  //user thinks %s prints as character of string
}
int V7;
int main() {
   for (; "ab"[V7] != 0;) {
      F1(97 - 97, V7 + "zy", 122 / 122);
      V7 = V7 + 1;
   }
   //printf("c\n");                      //user forgot to come back out to outer function after for loop execution
}
