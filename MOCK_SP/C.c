#include <stdio.h>

int main() {
   int N;
   scanf("%d", &N);

   int one = 0, five = 0, ten = 0, fifty = 0, hundred = 0, five_hundred = 0;

   five_hundred = N / 500;
   N %= 500;

   hundred = N / 100;
   N %= 100;

   fifty = N / 50;
   N %= 50;

   ten = N / 10;
   N %= 10;

   five = N / 5;
   N %= 5;

   one = N;

   for(int i=0; i<one; i++) {
      printf("1 ");
   }

   for(int i=0; i<five; i++) {
      printf("5 ");
   }

   for(int i=0; i<ten; i++) {
      printf("10 ");
   }

   for(int i=0; i<fifty; i++) {
      printf("50 ");
   }

   for(int i=0; i<hundred; i++) {
      printf("100 ");
   }

   for(int i=0; i<five_hundred; i++) {
      printf("500 ");
   }

   printf("\n");
}
