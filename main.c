#include <stdio.h> // fuer printf()
#define _USE_MATH_DEFINES // for C
#include <math.h> // Pi, Potenz, ...

int main()

{
  double lengh; // --- Variable for decimal
  double scope, surface;

  printf("Square calculation (scope and surface)");

  // --- Inputs
  printf("\nPlease enter lenght [m]:");
  scanf("%lf", & lengh );

  /* calculation */
  scope = lengh * 4.0;

  // --- power of a number
  // https://www.programiz.com/c-programming/library-function/math.h/pow
  surface =  pow(lengh, 2.0);

  // --- Outputs
  printf("Circumference: %lf[m] Surface: %lf[m^2]",scope,surface);

  return 0;
}
