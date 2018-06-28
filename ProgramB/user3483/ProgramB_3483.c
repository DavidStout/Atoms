#include <stdio.h>

void F1(float V1, char *V2, float V3) {
   printf("a: %1.1f %s %1.1f\n", V1, V2, V3);
   float V4 = (V1 / V3) + V3;
   char *V5 = V2 - (int)V1;
   V2 = V2 - 1;
   float V6 = (int)V2 / (int)V2;
   printf("b: %1.1f %s %1.1f\n", V4, V5, V6);
}

int V7;
int main() {
   for (; "ab"[V7] != 0;) {
      F1(97 - 97, V7 + "zy", 122 / 122);
      V7 = V7 + 1;
   }
   printf("c\n");
}