long factorial (long b);
#include <stdio.h>
long s, g, b;
int main()
{
    printf("Ingrese: ");
    scanf("%ld", &g);
    s = factorial(g);
    printf("El valor es: %d", s);
    return 1;
}
long factorial(long b)
{
    long i, valor=1;
    for(i = b;i>1;i--)
    {
        valor=valor*i;
    }
    return (valor);
}
