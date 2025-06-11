# Trabajo-Practico-N1

## Consigna.

La consigna de este trabajo práctico era realizar el código refactor de **Resolucion_Final_Informatica_I** por medio del uso de funciones y separación de archivos. [Código aquí](https://github.com/DamRCorba/Informatica-2/blob/main/02_Estructuras/ejemplos/Ejemplo3/main.c)

## Resolucion.

Para realizar el trabajo práctico se crearon dos nuevos archivos, uno **funciones.h**, en el que se encuentran los prototipos de las funciones nuevas **cargar_datos** y **ordenar_por_cantidad**, definiciones de constantes y las librerías. El otro, **funciones.c** contiene el código de las funciones nuevas, en donde **carga_datos** permite, justamente, cargarle datos a cualquier estructura de datos tipo *articulos_t* para luego devolverla cargada y que en el archivo principal se pueda utilizar; la función **ordenar_por_cantidad** recibe una estructura de datos del mismo tipo, y procede a ordenarla en base a la cantidad total de todas las sucursales por artículo. 
