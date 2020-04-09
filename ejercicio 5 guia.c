#include <stdio.h>
int ri=0, rj=1, fibo=0, n;
int main()
{
    do
    {
    printf("Ingrese un entero para saber si pertenece a la serie de Fibonacci: ");
    scanf("%d", &n);
    }while(n<0);
    do
    {
        ri=rj;//termino-2
        rj=fibo;//t-1
        fibo=ri+rj;//t=t-2)+(t-1
    }while(fibo<n);
    (fibo==n?printf("El numero %d pertenece a la serie de Fibonacci.", n):printf("El numero %d no pertenece a la serie de Fibonacci.",n));
    return 1;
}
