#include<stdio.h>
 
int main() {
 
   int rad,dia;
   float PI = 3.14, area, ci;
 
   printf("Enter radius of circle: ");
   scanf("%d", &rad);
   dia=2*rad;
   printf("diameter of circle is %d",dia);
 
   area = PI * rad * rad;
   printf("Area of circle : %f ", area);
 
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);
 
   return (0);
}