//
// Created by Roselyne on 23/11/2024.
//
#include <stdio.h>

int main(void)
{
    int arreglo[10];
    int mayor, menor;

    /*Para encontrar el menor y el mayor primero tenemos que almacenar un valor en las
     *variables el cual solo sera nuestra muestra, y de ahi por medio de if statements
     *los iremos actualizando, y almacenando el valor en su respectiva variable.
     */
    printf("Ingresa un numero:\n");
    scanf("%d", &arreglo[0]);
    mayor = menor = arreglo[0];

   /*Empezamos con el for loop para pedir los datos del arreglo y ponemos como limite
    * que sean solo 10 datos. */
    for (int i = 1; i < 10; i++)
    {
        printf("Ingresa un numero:\n");
        scanf("%d", &arreglo[i]);

        // Usamos el if para el mayor y menor e ir almacenandolo en la variable.
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
        if (arreglo[i] < menor) {
            menor = arreglo[i];
        }
    }

    printf("El mayor numero es: %d\n", mayor);
    printf("El menor numero es: %d\n", menor);
    printf("Fin del programa, Hasta luego R. :P");

    return 0;
}