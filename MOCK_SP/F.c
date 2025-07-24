#include <stdio.h>

int main() {
   int T;
   scanf("%d", &T);

   int inputs[T][3];

   for(int i=0; i<T; i++) {
      for (int j = 0; j < 3; j++) {
         scanf("%d", &inputs[i][j]);
      }
   }

   for(int i=0; i<T; i++) {
      int digit1 = inputs[i][0];
      int digit2 = inputs[i][1];
      int digit3 = inputs[i][2];

      if(digit1 == 7 || digit2 == 7 || digit3 == 7) {
         printf("YES\n");
      }else {
         printf("NO\n");
      }
   }
}
