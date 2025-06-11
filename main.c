#include "funciones.h" 

int main(void){
    articulos_t articulos[CANT_ARTICULOS] = {0};
    int opc=0;
    printf("Bienvendio al final de Info 1\n\n");
    carga_datos(articulos);
    int i=0;
    system("cls");
    printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
    while(i< CANT_ARTICULOS && articulos[i].descripcion[0]){
        printf("%s\t\t    %d\t\t    %d\t\t    %d\t\t  %d\n", articulos[i].descripcion, articulos[i].cantidad_sucursal[SUCURSAL_1], articulos[i].cantidad_sucursal[SUCURSAL_2], articulos[i].cantidad_sucursal[SUCURSAL_3],articulos[i].total);
        i++;
    }
    printf("¿Desea ordenar los datos? 1-Si, 2-No: ");
    scanf("%d",&opc);
    if(opc){
        ordenar_por_cantidad(articulos);
        printf("-------------------------Articulos Ordenados-------------------------\n\n");
        i = 0;
        printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
        while (i < CANT_ARTICULOS && articulos[i].descripcion[0]){
        printf("%s\t        %9d\t        %4d\t        %3d\t        %8d\n", articulos[i].descripcion, articulos[i].cantidad_sucursal[SUCURSAL_1], articulos[i].cantidad_sucursal[SUCURSAL_2], articulos[i].cantidad_sucursal[SUCURSAL_3], articulos[i].total);
        i++;
        }
    }else{
        printf("¡Adiós!");
        return 0;
    }
    return 0;
}
