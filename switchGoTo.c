#include <stdio.h>
#include <stdlib.h>

void switch_goto(int opcion, int *arr);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <opcion> <iteraciones>\n", argv[0]);
        return 1;
    }

    // Obtener el valor de "opcion" desde los argumentos de la línea de comandos
    int opcion = atoi(argv[1]);

    // Obtener el número de iteraciones desde los argumentos de la línea de comandos
    int iteraciones = atoi(argv[2]);

    // Inicializar un arreglo de 4 elementos
    int arr[4] = {10, 20, 30, 40};
    void *puntero = (void*)&arr[opcion - 1];

    for (int i = 0; i < iteraciones; ++i) {
        // Mostrar el valor de la variable y su puntero antes del cambio
        printf("Iteracion %d\n\n", i + 1);
        printf("Valores antes del cambio\n");
        printf("Arreglo: ");
        for (int j = 0; j < 4; ++j) {
            printf("%d ", arr[j]);
        }
        printf("\n");
        printf("Valor a cambiar en el arreglo: %d\n", arr[opcion - 1]);
        printf("Puntero: %p\n\n", puntero);

        // Llamar a la función que simula el switch usando goto
        switch_goto(opcion, arr);

        // Mostrar el valor de la variable y su puntero después del cambio
        printf("Valores despues del cambio\n");
        printf("Arreglo: ");
        for (int j = 0; j < 4; ++j) {
            printf("%d ", arr[j]);
        }
        printf("\n");
        printf("Valor cambiado en el arreglo: %d\n", arr[opcion - 1]);
        printf("Puntero: %p\n\n", puntero);
        printf("-----------------------------------------\n");
    }

    return 0;
}

void switch_goto(int opcion, int *arr) {
    // Utilizar goto para simular el switch
    goto switch_start;

    switch_case_1:
        // Modificar el valor del primer elemento del arreglo
        *arr = *arr + 100;
        goto switch_end;

    switch_case_2:
        // Modificar el valor del segundo elemento del arreglo
        *(arr + 1) = *(arr + 1) + 200;
        goto switch_end;

    switch_case_3:
        // Modificar el valor del tercer elemento del arreglo
        *(arr + 2) = *(arr + 2) + 300;

        goto switch_end;

    switch_case_4:
        // Modificar el valor del cuarto elemento del arreglo
        *(arr + 3) = *(arr + 3) + 400;
        goto switch_end;

    switch_default:
        // Manejar el error si es necesario
        printf("Opción no válida.\n");
        goto switch_end;

    switch_start:
        switch (opcion) {
            case 1:
                goto switch_case_1;
            case 2:
                goto switch_case_2;
            case 3:
                goto switch_case_3;
            case 4:
                goto switch_case_4;
            default:
                goto switch_default;
        }

    switch_end:
        return;
}