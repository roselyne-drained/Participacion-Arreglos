//
// Created by Roselyne on 23/11/2024.
//
#include <stdio.h>

int main(void) {
    int arreglo[5];
    for (int i = 0; i < 5; i++) {
        arreglo[i] = 0;
    }

    for(int i=0;i<5;i++) {
        printf("En la posicion:%d. Es = %d\n",i,arreglo[i]);
    }
    for(int i = 0; i < 5; i++) {
        printf("Dame el valor:");
        scanf("%d", &arreglo[i]);

        printf("El dato de la posicion %d es:%d\n",i,arreglo[i]);
    }

    return 0;
}