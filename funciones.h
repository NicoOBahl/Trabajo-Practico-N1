#ifndef FUNCIONES_H
#define FUNCIONES_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define CANT_ARTICULOS 60

#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2
#define TOTAL 4

typedef struct {
    char descripcion[90];
    int cantidad_sucursal[3];
    int total;
}articulos_t;

void carga_datos(articulos_t articulof[]);
void ordenar_por_cantidad(articulos_t art_f[]);

#endif