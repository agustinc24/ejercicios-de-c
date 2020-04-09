#include <stdio.h>
float a;
double tol, ri=1, rj;
int main()
{
    do
    {
        printf("Ingrese un numero natural: ");
        scanf("%f", &a);
    }while(a<0);
    if(a==0)
    {
        printf("La raiz de %.0f es: 0", a);
    }
    else
    {
        if(a==1)
        {
            printf("La raiz de %.0f es: 1", a);
        }
        else
        {
            printf("Ingrese tolerancia: ");
    scanf("%lf", &tol);
           do
            {
                rj=ri;
                ri=(rj+(a/rj))/2;
            }while((rj-ri)>=tol || (ri-rj)>=tol);
            printf("La raiz de %f es: %f", a, ri);
        }
    }
 return 1;
}
