#include <stdio.h>
#include <stdio.h>
int factorial(int num);
int n1, ff;
int main() //(n-1)!+1 es multiplo de n ---> primo
{
      do
    {
        printf("Ingrese un numero natural: ");
        scanf("%d", &n1);
    }while(n1<=0);
    ff=factorial(n1-1);
    ff=ff+1;
    if(ff%n1==0)
    {
        printf("Es primo");
    }
    else
    {
        printf("No es primo");
    }
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
