#include <stdio.h>
#include <math.h>
int main() {
  printf("Enter the three sides of the triangle : ");
  float a, b, c;
  scanf("%f%f%f", &a, &b, &c);
  printf("area of the triangle is %f sq. units.", sqrt((a+b+c)*(a+b-c)*(a-b+c)*(b-a+c)/16));
  return 0;
}
