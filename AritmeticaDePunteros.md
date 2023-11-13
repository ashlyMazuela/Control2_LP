La Aritmética de Punteros se refiere a operaciones aplicables a diferentes tipos de punteros y sus valores, según sea necesario. Estas operaciones incluyen sumas, restas, asignaciones y comparaciones (solo para elementos del puntero).

Para distinguir si una operación se aplica al puntero o a su contenido, se utiliza la notación adecuada. Por ejemplo, al asignar "*puntero" con la dirección de memoria de "aux":

    int aux = 0;
    int *puntero = &valor;

Cualquier modificación en el puntero también afecta el valor de "aux" al compartir la misma dirección de memoria.

Para modificar el contenido en la dirección de memoria asignada a un puntero, se utiliza la notación "*nombre_puntero (operación) otro_valor". Las comparaciones se realizan entre elementos de una misma matriz utilizando símbolos como ==, 1=, <, >, <=, >=.

Al realizar operaciones en la dirección de memoria referida al puntero, se utiliza "nombre_puntero (operación)". Estas operaciones pueden incluir desplazamientos ascendentes, cálculos de distancias entre elementos o punteros, y comprobaciones de igualdad o desigualdad entre punteros.

Otro ejemplo de la utilización de la aritmética de punteros, se puede apreciar en el documento "switchGoTo.c" presente en el entregable.

