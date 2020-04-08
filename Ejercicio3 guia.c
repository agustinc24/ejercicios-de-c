#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int num);
int x, i=0, fact;
double tol, pot, valor, dif=0;
int main()
{
    printf("Ingrese x: ");
    scanf("%d", &x);
    printf("Ingrese tolerancia: ");
    scanf("%lf", &tol);
    do
    {
      pot = pow(x,i);
      fact = factorial(i);
      valor+=(pot/fact);
      i++;
      dif=(pot/fact);
    }while(dif>=tol);
    printf("El valor es: %f", valor);
 return 1;
}
int factorial(int num)
{
   int i, valor=1;
    for(i = num;i>1;i--)
    {
        valor=valor*i;
    }
    return (valor);
}
