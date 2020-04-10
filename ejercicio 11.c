#include <stdio.h>
#include <stdio.h>
int n1, acum=0, i;
int main()
{
      do
    {
        printf("Ingrese un numero natural: ");
        scanf("%d", &n1);
    }while(n1<0);
    for(i=n1;i>1;i--)
    {
        if(i%2==0)
        {
            acum+=i;
        }
    }
    printf("La suma es: %d", acum);
}
