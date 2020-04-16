#include "header.h"
void orden_asc(int vec[], int n)
{
    int cota = n, k, aux, i;
 k=1;
 while(k!=0)
 {
     k=0;
     for(i=1;i<cota;i++)
     {
         if(vec[i-1]>vec[i])
         {
             aux=vec[i-1];
             vec[i-1]=vec[i];
             vec[i]=aux;
             k=i;
         }
     }
     cota=k;
 }
}

void eliminar_pos(int *ve, int n, int pos)
{
    int i;
    for(i=0; i<n;i++)
    {
        if(i==pos)
        {
            ve[i]=nuloint;
        }
    }
}

void eliminarprimerpos(int *vec, int m, int num)
{
    int i, band=0;
    for(i=0;i<m;i++)
    {
        if(band==0 && vec[i]==num)
        {
         vec[i]=nuloint;
         band=1;
        }
    }
}
void eliminar_elem(int *vec, int m, int num)
{
    int i;
    for(i=0;i<m;i++)
    {
        if(vec[i]==num)
        {
         vec[i]=nuloint;
        }
    }
}
int palindromo(char *vc1, char *vc2, int largo)
{
    int band=0, devuelve=0, i, j=largo;
    for(i=0;i<largo;i++)
    {
        if(vc1[i]==vc2[j])
        {
            band++;
        }
        j--;
    }
    if(band==largo)
    {
        devuelve=1;
    }
    return(devuelve);
}
