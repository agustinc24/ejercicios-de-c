#include <stdio.h>
int main()
{
 int i,j,factorial,potencia,x;
 double e;
 printf("Introduce el valor de x: ");
 scanf("%d",&x);
 // Calcula los primero 10 valores para e elevado a x.
e=1.0;
 for (i=1;i<=10;i++)
 {
 //Calcula x elevada a una potencia i
 potencia=1;
 for (j=1;j<=i;j++)
 potencia=potencia*x;
 // Calcula el Factorial de i
 factorial=1;
 for (j=i;j>0;j--)
 factorial=factorial*j;
 //Acumula el valor de e
 e=e+(potencia/factorial);
 }
 printf("El valor de e elevado a x: %f", e);
 return 0;
}
