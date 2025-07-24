#include <stdio.h>

int main() {
   int T;
   scanf("%d", &T);

   int temps[T];

   for(int i=0; i<T; i++) {
      scanf("%d", &temps[i]);
   }

   for(int i=0; i<T; i++) {
      if(temps[i] > 24) {
         printf("YES\n");
      }else {
         printf("NO\n");
      }
   }
}
