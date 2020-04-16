#include "header.h"

int ejercicio;
int main()
{
    printf("Ingrese el numero de ejercicio que quiere ver: ");
    scanf("%d", &ejercicio);
    switch(ejercicio)
    {
    case 23:
    {
        int i;
        int vector[8] = {5,2,4,1,6,8,3,7};
        orden_asc(vector, 8);
        for(i=0; i<8; i++)
        {
            printf("posicion=%d  numero=%d\n", i,vector[i]);
        }
    }
    break;
    case 24:
        {
            int vector[8] = {1,2,3,4,5,6,7,8};
            int posi, i=0;
            printf("\nIngrese la posicion que desea eliminar: ");
            scanf("%d", &posi);
            eliminar_pos(&vector, 8, posi-1);
            for(i=0; i<8;i++)
                {
                    if(vector[i]!=nuloint)
                    {
                    printf("posicion=%d numero=%d\n",i+1, vector[i]);
                    }
                }
    }
    break;
    case 25:
        {
            int vector[8] = {1,2,1,4,1,6,1,8};
            int val, i;
            printf("\nIngrese el numero que no quiera que se repita: ");
            scanf("%d", &val);
            eliminarprimerpos(&vector, 8, val);
            for(i=0;i<8;i++)
            {
                if(vector[i]!=nuloint)
                {
                printf("Posicion=%d  numero=%d\n",i+1, vector[i]);
                }
            }
        }
    break;
    case 26:
        {
            int vector[8] = {1,2,2,4,1,4,6,6};
            int val, i;
            printf("\nIngrese el numero que no quiera que aparezca: ");
            scanf("%d", &val);
            eliminar_elem(&vector, 8, val);
            for(i=0;i<8;i++)
            {
                if(vector[i]!=nuloint)
                {
                printf("Posicion=%d  numero=%d\n",i+1, vector[i]);
                }
            }
        }
    break;
    case 27:
        {
          char cad1[20], cad2[20];
          int resul, lar;
          printf("Ingrese la palabra que quiera sabser si es un palindromo: ");
          scanf("%s",cad1);
          lar = strlen(cad1);
          strcpy(cad2, cad1);
          resul = palindromo(&cad1, &cad2, lar);
          if(resul==1)
          {
              printf("La palabra %s es un palindromo.", cad1);
          }
          else
          {
              printf("La palabra %s no es un palindromo.", cad1);
          }
        }
    break;
    case 28:
        {
            char algo[20];
            int largo=0;
            printf("Ingrese algo: ");
            scanf("[^\n]", algo);
            largo = strlen(algo);
            printf("Largo=%d cad=%s", largo, algo);
        }
    break;
    }
    return 1;
}
