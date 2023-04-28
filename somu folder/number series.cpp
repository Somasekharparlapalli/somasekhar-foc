#include <stdio.h>

int main() {
   int i, current = 1, next = 2, temp;
   
   printf("The first 10 terms of the number series are:\n");
   printf("%d %d ", current, next);

   for (i = 3; i <= 10; i++) {
      temp = next;
      next = current + next;
      current = temp;
      printf("%d ", next);
   }

   return 0;
}

