//
// Created by Roselyne on 23/11/2024.
//
#include <stdio.h>

int main(void) {
    float arreglo[10];
    float suma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Dame la calificacion:\n");
        scanf(" %f", &arreglo[i]);
        suma += arreglo[i];
    }
    for(int i = 0; i < 10; i++) {
        printf("El dato de la calificacion %d es:%.2f\n",i+1,arreglo[i]);
    }
    float promedio = suma / 10;
    printf("El promedio es: %2f\n",promedio);
}