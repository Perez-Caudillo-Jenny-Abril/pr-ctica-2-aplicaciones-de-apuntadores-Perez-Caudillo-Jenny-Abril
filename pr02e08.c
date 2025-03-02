// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    int cam=*a;
    *a=*b;
    *b=cam;
    //Aquí el codigo para intercambiar valores
}

int main() {
    int arr[] = {5, 10};
    
    // Código para llamar a la función y mostrar los valores intercambiados
    intercambiar(&arr[0],&arr[1]);
    printf("\nValores intercambiados:\n%i, %i\n\n",arr[0],arr[1]);

    return 0;
}
