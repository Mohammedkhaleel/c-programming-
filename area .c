//3. WAP to calculate the area of a circle.
#include<stdio.h>
#define PI 3.141

int main() {
   int radius, area;

   printf("Enter the radius of the circle: ");
   scanf("%d", &radius);

   area = PI * radius * radius;

   printf("The area of the circle with radius %d is %d\n", radius, area);

   return 0;
}