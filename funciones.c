#include "funciones.h"

void carga_datos(articulos_t articulof[]){
        int opc=0, i, articulo_index, sucursal; 
        char articulo[90];
        do{
        printf("Ingrese la descripcion del articulo: ");
        scanf("%s",articulo);                                   //Cargo la desc. del artículo
        while(strlen(articulo)>90){
            printf("Ingrese un articulo mas corto: ");
            scanf("%s",articulo);
        }                               
        i=0;
        while (articulof[i].descripcion[0] && strcmp(articulo, articulof[i].descripcion)) i++;
        articulo_index = i;
        strcpy(articulof[i].descripcion, articulo);         //Copio el articulo dentro de la struct

        printf("\n%s, Indice: %d\n", articulof[articulo_index].descripcion, articulo_index);

        printf("Para que sucursal va a realizar la carga? (1,2,3): ");
        scanf("%d", &sucursal);
        while(sucursal > 3){
            printf("Ingrese una sucursal valida (1 2 3): ");
            scanf("%d",&sucursal);
        }
        
        printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);
        scanf("%d", &articulof[articulo_index].cantidad_sucursal[sucursal-1]);
        while(articulof[articulo_index].cantidad_sucursal[sucursal-1] < 0){
            printf("Ingrese una cantidad valida (> 0): ");
            scanf("%d", &articulof[articulo_index].cantidad_sucursal[sucursal-1]);
        }
        for(i=0;i<3;i++) articulof[articulo_index].total += articulof[articulo_index].cantidad_sucursal[i];        
        printf("Desea ingresar otro articulo? 1-Si, 2-No: ");
        scanf("%d",&opc);
    } while (opc==1);
}

void ordenar_por_cantidad(articulos_t art_f[]){
    int opc, i, articulo_index;
    char articulo[90];
    for ( opc = 1; opc < CANT_ARTICULOS; opc++){
        for ( i = 0; i < CANT_ARTICULOS-1; i++){
            if(art_f[i].total<art_f[i+1].total){
                strcpy (articulo,art_f[i].descripcion);
                strcpy(art_f[i].descripcion,art_f[i+1].descripcion);            //Ordeno la descripcion
                strcpy(art_f[i+1].descripcion, articulo);

                articulo_index = art_f[i].cantidad_sucursal[SUCURSAL_1];
                art_f[i].cantidad_sucursal[SUCURSAL_1] = art_f[i+1].cantidad_sucursal[SUCURSAL_1];      //Ordeno la cantidad en suc 1
                art_f[i+1].cantidad_sucursal[SUCURSAL_1] = articulo_index;

                articulo_index = art_f[i].cantidad_sucursal[SUCURSAL_2];
                art_f[i].cantidad_sucursal[SUCURSAL_2] = art_f[i + 1].cantidad_sucursal[SUCURSAL_2];      //Ordeno la cantidad en suc 2
                art_f[i + 1].cantidad_sucursal[SUCURSAL_2] = articulo_index;

                articulo_index = art_f[i].cantidad_sucursal[SUCURSAL_3];
                art_f[i].cantidad_sucursal[SUCURSAL_3] = art_f[i + 1].cantidad_sucursal[SUCURSAL_3];      //Ordeno la cantidad en suc 3
                art_f[i + 1].cantidad_sucursal[SUCURSAL_3] = articulo_index;

                articulo_index = art_f[i].total;
                art_f[i].total = art_f[i + 1].total;
                art_f[i + 1].total = articulo_index;
            }  
        }    
    }
}