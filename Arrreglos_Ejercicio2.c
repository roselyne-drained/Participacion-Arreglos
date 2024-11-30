//
// Created by Roselyne on 23/11/2024.
//
#include <stdio.h>

int main(void) {
    int arregloA[20];
    int arregloB[20];
    int arregloC[20];

    for (int i = 0; i < 20; i++) {
        printf("Ingresa un numero entero para A:\n");
        scanf(" %d", &arregloA[i]);
    }
    for (int i = 0; i < 20; i++) {
        printf("Ingresa un numero entero para B:\n");
        scanf(" %d", &arregloB[i]);
    }
    for (int i = 0; i < 20; i++) {
        arregloC[i] = arregloA[i] * arregloB[19-i];
    }
    for (int i = 0; i < 20; i++) {
        printf("A:%d x B:%d = C:%d\n",arregloA[i],arregloB[19-i],arregloC[i]);
    }
    return 0;

}