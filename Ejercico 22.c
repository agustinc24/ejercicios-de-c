#include <stdio.h>
#include <stdlib.h>
void carga (int vect[], int, int);
int vect [20]={0};
int pos, i;
int main()
{
    printf("Ingrese el numero de posicion en la que quiere insertar un elemento: ");
    scanf("%d", &pos);
    carga(vect, 20, pos-1);
    printf("Contenido de la posicion %d es: %d\n",pos , vect[pos-1]);
}
void carga(int v[], int n, int posi)
{
    int i=0, val;
    printf("n=%d pos=%d", n, posi);
    for(i=0; i<n; i++)
    {
        if(i==posi)
        {
            printf("i=%d",i);
        printf("Ingrese el elemento a insertar: ");
        scanf("%d", &val);
        v[i]+=val;
        }
    }
}
