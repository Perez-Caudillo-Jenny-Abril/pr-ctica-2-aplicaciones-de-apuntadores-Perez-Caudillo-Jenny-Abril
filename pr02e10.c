// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño){
    // Implementar algoritmo de ordenamiento aquí
    for(int i=0; i<tamaño-1; i++){
        for(int j=0; j<tamaño-1-i; j++){
            if (*(arr + j) > *(arr + j + 1)) { 
                int cam = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = cam;
            }

        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};

    // Código para ordenar y mostrar el arreglo

    ordenarBurbuja(&arr[0],5);
    printf("\nArreglo ordenado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n\n");

    return 0;
}
