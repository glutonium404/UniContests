#include <stdio.h>

int main() {
   int T;
   scanf("%d", &T);

   int inputs[T];

   for(int i=0; i<T; i++) {
      scanf("%d", &inputs[i]);
   }

   for(int i=0; i<T; i++) {
      printf("%d\n", inputs[i] * inputs[i]);
   }
}
