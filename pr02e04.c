#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  
  printf("\nValores originales:\n");
  for (int i = 0; i < 5; i++) {
    //Escribe el codigo para imprimir los valores usado el apuntador
    printf("%d ", *(ptr+i));
  
  }
  
  printf("\n");
    
  for (int i = 0; i < 5; i++) {
    // Duplicar cada elemento
    *(ptr+i) *= 2;  // *(ptr+i) = *(ptr+1)*2
  }
  
  printf("\nValores modificados:\n");
  for (int i = 0; i < 5; i++) {
    //Escribe el codigo para imprimir los valores usado el apuntador
    printf("%d ", *(ptr+i));
  }

  printf("\n\n");
  
  return 0;
}
