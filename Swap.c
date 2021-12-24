#include<stdio.h>
int main() {
  double A, B, temp;
  printf("Enter first number: ");
  scanf("%lf", &A);
  printf("Enter second number: ");
  scanf("%lf", &B);

  // value of A is assigned to temp
  temp = A;

  // value of B is assigned to A
  A  = B;

  // value of temp (initial value of first) is assigned to B
  B = temp;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", A);
  printf("After swapping, second number = %.2lf", B);
  return 0;
}
