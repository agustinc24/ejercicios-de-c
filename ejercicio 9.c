#include <stdio.h>
#include <stdio.h>
int n1, i=0, n2;
int main()
{
      do
    {
        printf("Ingrese un numero natural que quiera devidir: ");
        scanf("%d", &n1);
        printf("Ingrese el divisor (recuerde que debe ser mayor a 0): ");
        scanf("%d", &n2);
    }while(n1<0 || n2<0);
    while(n1>0)
    {
        i++;
        n1=n1-n2;
    }
    printf("El cociente es: %d", i);
    return 1;
}
