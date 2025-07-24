#include <stdio.h>

int main() {
   int T;
   scanf("%d", &T);

   int inputs[T][30];

   for(int i=0; i<T; i++) {
      for (int j = 0; j < 30; j++) {
         scanf("%d", &inputs[i][j]);
      }
   }

   for(int i=0; i<T; i++) {
      int consecutive_days = 0;

      for(int j=0; j<30; j++) {
         if(inputs[i][j] == 0) {
            consecutive_days = 0;
         }else {
            consecutive_days++;

            if (consecutive_days > 5) {
               break;
            }
         }
      }

      if (consecutive_days > 5) {
         printf("#coderlifematters\n");
      } else {
         printf("#allcodersarefun\n");
      }
   }
}
