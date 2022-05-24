#include <stdio.h> // fuer printf()
#define _USE_MATH_DEFINES // for C
#include <math.h> // Pi, Potenz, ...

int main()

{
  double Laenge; // --- Variable fuer Kommazahl
  double Breite; // --- Variable fuer Kommazahl
  double Umfang, Flaeche;

  printf("Quatratberechnung (Umfang und Flaeche)");

  // --- Eingabe
  printf("\nBitte Laenge eingeben [m]:");
  scanf("%lf", & Laenge );
  printf("Bitte Breite eingeben [m]");

  /* Verarbeitung */
  // --- u=d * Breite

  Umfang = Laenge * 4.0;

  // --- A = Laeng * Breite
  Flaeche =  pow(Laenge, 2.0);

  // --- Ausgabe
  printf("Der Umfang = %lf[m] die Flaeche = %lf[m^2]",Umfang,Flaeche);

  return 0;
}
