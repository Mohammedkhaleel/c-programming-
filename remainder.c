//10. WAP to calculate the remainder of 2 numbers without using % operator.
//rem = a - (a / b) * b;


#include <stdio.h>

int main() {
   int a,b,rem;

   printf("Enter num a: ");
   scanf("%d", &a);

   printf("Enter num b: ");
   scanf("%d", &b);

   rem = a - (a / b) * b;

   printf("Remainder = %d\n", rem);

   return 0;
}