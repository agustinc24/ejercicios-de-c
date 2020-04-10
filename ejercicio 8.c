#include <stdio.h>
#include <stdlib.h>
int n1, n2, n3=0, i, ac, cc;
int main()
{
    do
    {
        printf("Ingrese un numero natural: ");
        scanf("%d", &n1);
        printf("Ingrese el siguiente numero: ");
        scanf("%d", &n2);
    }while(n1<0 || n2<0);

    for(i=0; i<n1; i++)
    {
        n3+=n2;
    }
    printf("El resultado de multiplicar ambos numeros es: %d", n3);
    return 1;
}
