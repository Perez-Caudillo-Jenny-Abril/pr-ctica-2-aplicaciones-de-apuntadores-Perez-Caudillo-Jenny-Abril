// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    // Implementar la suma aquí
    int suma=0;
    for(int i=0; i<tamaño; i++){
        suma=suma+*(arr+i);
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    // Código para calcular y mostrar la suma
    int resul =  sumaArreglo(&numeros[0],5);
    printf("\nLa suma del arreglo es %d \n\n", resul);
    return 0;
}
