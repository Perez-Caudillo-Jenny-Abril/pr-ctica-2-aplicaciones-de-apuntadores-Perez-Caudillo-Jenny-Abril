// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    for(int i=0; i<tamaño; i++){
        if(arr[i]==valor){
            return &arr[i];

        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    // Código para buscar un número y mostrar su dirección

    int valor;
    printf("\nIngresa el numero a buscar: ");
    scanf("%i", &valor);

    int *direccion = buscarElemento(&arr[0], 5, valor);

    if (direccion != NULL) {
        printf("Numero encontrado en la direccion: %p\n\n",direccion);
    } else {
        printf("Entrada no encontrada.\n\n");
    }

    return 0;
}
