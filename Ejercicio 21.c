#include <stdio.h>
#include <stdlib.h>
double numero, decimal;
int entero, redon;
int main()
{
    printf("Inregrese un numero: ");
    scanf("%lf", &numero);
    entero = (int)numero; //casteo el numero y lo hago decimal
    decimal = numero - entero;
    redon = entero;
    if(decimal>=0.500000000000000)
    {
        redon = entero + 1;
    }
    printf("La parte entera es: %d , si lo redondeo es: %d", entero, redon);

}
