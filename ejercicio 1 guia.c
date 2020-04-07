int factorial (int b);
#include <stdio.h>

int s, g, b;
int main()
{
    printf("Ingrese: ");
    scanf("%d", &g);
    s = factorial(g);
    printf("El valor es: %d", s);
    return 1;
}
int factorial(int b)
{
    int i, valor=1;
    for(i = b;i>1;i--)
    {
        valor=valor*i;
    }
    return (valor);
}
