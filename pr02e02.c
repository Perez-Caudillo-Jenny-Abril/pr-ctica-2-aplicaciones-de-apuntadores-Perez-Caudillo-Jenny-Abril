#include <stdio.h>
/*
 Este programa crea un apuntador de tipo entero
 que apunta al inicio de un arreglo.
*/
int main () {

  short arr[5] ={1,2, 3, 4, 5}, *apArr;

  printf("\n");
  apArr = &arr[0]; //apArr = arr; (probar)

  // Imprime la dirección de memoria del arreglo en la posición [0]
  printf("Direccion del arreglo en la primera posicion: %p\n",&arr[0]);
  // Imprime la dirección de memoria del arreglo (el nombre del arreglo es un apuntador)
  printf("Direccion del arreglo: %p\n",&arr); //Apunta al arreglo completo
  printf("Direccion del arreglo: %p\n", arr); //Puntero al primer elemento
  // Imprime la dirección de memoria almacenada en el apuntador apArr
  printf("Direccion almacenada en el apuntador: %p\n\n",apArr);

  printf("*apArr = %i\n",*apArr);
  // Suma una localidad al inicio del arreglo e imprime su valor
  printf("*(apArr+1) = %i\n",*(apArr+1));
  printf("*(apArr+2) = %i\n",*(apArr+2));
  printf("*(apArr+3) = %i\n",*(apArr+3));
  printf("*(apArr+4) = %i\n",*(apArr+4));
  printf("\n");

  //Imprimir el elemento 4 y 5
  printf("Elemento 4 = %i\n",arr[3]);
  printf("Elemento 5 = %i\n",arr[4]);
  printf("\n");

 // Escribe una línea de código para mostrar el valor apuntado por apArr
  printf("*(apArr) = %i\n",*(apArr));
  printf("Recorriendo el arreglo usando un apuntador:\n");
  for (int i = 0; i < 5; i++) {
    printf("Elemento con indice %d = %d\n", i, *(apArr + i));
  }

  //Modifica apArr para que apunte al cuarto elemento
  apArr = &arr[3]; 

  //Accede al elemento con indice -2 usando el apuntador
  printf("\n");
  printf("Elemento con indice -2 = %d\n", apArr[-2]);
  printf("\n");

  //Ajusta el ciclo for para que se pueda recorrer completo el arreglo de acuerdo al elemento apuntado
  for (int i = -3; i < 2; i++) {
    printf("Elemento con indice %d = %d\n", i, *(apArr + i));
  }
  printf("\n");
  
  // Imprimir el primer y ultimo elemento del arreglo original
  printf("Primer elemento: %d\n", arr[0]);
  printf("Ultimo elemento: %d\n", arr[4]);
  printf("\n");

  return 0;
}
