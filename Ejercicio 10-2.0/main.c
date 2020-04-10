#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int n, resul;
int main()
{
    printf("Ingrese un numero natural: ");
    scanf("%d", &n);
    resul=calcule(n);
    return 1;
}
