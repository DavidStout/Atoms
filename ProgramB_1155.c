#include <stdio.h>
void F1(int V1, char V8[], int V3, int V7) {
   printf("a: %d %c %d\n", V1, V8[V7], V3);
   int V4 = (V1 / V3) + V3;
   char V5 = V8[V7 - V1 - 1];
   int V6 = (int)V8[V7] / (int)V8[V7];
   printf("b: %d %c %d\n", V4, V5, V6);
}
int V7;
char V8[] = "zy";
int main() {
   for (; "ab"[V7] != 0;) {
      F1(97 - 97, V8, 122 / 122, V7);
      V7 = V7 + 1;
   }
   //printf("c\n");
}
