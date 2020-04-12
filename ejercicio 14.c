#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int dia;
    int mes;
    int ano;
} fecha;
fecha f;
int func (int a, int b, int c);
int mes (fecha fm);
int bisiesto (fecha fb);
int dia (fecha fc);
int bis, mess, diaa, result;
int main()
{

    printf("Ingrese dia: ");
    scanf("%d", &f.dia);
    printf("Ingerese mes: ");
    scanf("%d", &f.mes);
    printf("Ingrese anio: ");
    scanf("%d", &f.ano);
    bis= bisiesto(f);
    mess = mes(f);
    diaa = dia(f);
    if(bis!=0 && mess!=0 && diaa!=0)
    {
    result = func(bis, mess, diaa);
    printf(result);
    }
    else
    {
        printf("Fecha incorrecta.");
    }
    return 1;
}
int result(int a, int b, int c)
{
    int val = 0;
    if (a==1)
    {
        if(b==2)
        {
            if(c<=28)
            {
                val = 1;
            }
        }
    }
}

int bisiesto(fecha fb)
{
    int res=0;
    if (fb.ano>=0)
    {
        if(fb.ano%4==0 && fb.ano%100!=0 || fb.ano%400==0)
        {
        res=1;
        }
        else
        {
            res=2;
        }
    }
    return(res);
}

int mes (fecha fm)
{
    int ress=0;
    if(fm.mes>=1 && fm.mes<=12)
    {
        ress=fm.mes;
    }
    return(ress);
}

int dia(fecha fc)
{
    int re=0;
    if(fc.dia>=1 && fc.dia<=31)
    {
        re=fc.dia;
    }
    return(re);
}
