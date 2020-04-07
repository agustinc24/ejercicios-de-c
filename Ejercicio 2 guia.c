int factorial (int b);
#include <stdio.h>
int m, n, factm, factn, factmn, restamyn, resultado, b;
int main()
{
do
    {
        printf("Ingrese N: ");
        scanf("%d", &n);
    } while(n<0);
    do
    {
        printf("Ingrese M: ");
        scanf("%d", &m);
    } while (m<=n);
    factm = factorial(m);
    printf("\n factorial M: %d", factm);
    factn = factorial(n);
    printf("\n factorial N: %d", factn);
    restamyn = m - n;
    printf("\n resta myn: %d", restamyn);
    factmn = factorial(restamyn);
    printf("\n factorial M - N: %d", factmn);
    resultado = factm / (factn*factmn);
    printf("El resultado es: %d", resultado);
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
