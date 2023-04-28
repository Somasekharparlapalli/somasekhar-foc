#include <stdio.h>

int main() {
   int i, sum = 0;

   printf("The first 10 even numbers are:\n");

   for (i = 2; i <= 20; i += 2) {
      sum += i;
      printf("%d ", i);
   }

   printf("\nThe sum of the first 10 even numbers is %d\n", sum);

   return 0;
}

