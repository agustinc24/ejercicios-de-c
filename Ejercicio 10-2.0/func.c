
#include <stdio.h>
#include <stdlib.h>

int lyv ()
{
    int mm;

        printf("Ingrese un numero natural: ");
        scanf("%d", &mm);

    return(mm);
}

int calcule (int val)
{
    int i, acum, ac=1, jj=0;
    acum=0;
    if(val==1)
    {
        printf("La suma es 1.");
    }
        else
        {
            for(i=1; i<=val; i++)
                {
                    acum+=ac;
                    ac++;
                    printf("\nacum=%d", acum);
                    jj+=i;
                    printf("\nvalor i= %d", jj);
                }
    printf("\nEl resultado de la suma de los primeros %d numeros naturales es %d", val, acum);
        }
    return(acum);
}
