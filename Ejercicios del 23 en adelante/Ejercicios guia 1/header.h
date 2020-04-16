#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nuloint 999999
void orden_asc(int vec[], int n);
void eliminar_pos(int *ve, int n, int pos);
void eliminarprimerpos(int *vec, int m, int num);
void eliminar_elem(int *vec, int m, int num);
int palindromo(char *vc1, char *vc2, int largo);

#endif // HEADER_H_INCLUDED
