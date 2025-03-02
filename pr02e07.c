// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *apt;
    apt=&arr[0];

    printf("\n");
    // Código para imprimir direcciones de memoria aquí
    for(int i=0; i<5; i++){
        printf("Elemento %i = %p\n", i+1, (apt+i));
    }
    printf("\n");
    return 0;
}
