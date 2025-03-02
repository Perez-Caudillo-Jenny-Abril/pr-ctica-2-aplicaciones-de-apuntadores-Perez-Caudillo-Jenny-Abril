#include <stdio.h>

int main () {
  char *ap, c, d, e;
  c = 'x';
  d = 'z';
  e = '\t';
  
  //Escribe el código para imprimir las direcciones de c, d y e
  printf("\n%p\n%p \n%p\n\n", &c, &d, &e);

  ap = &c;
  // imprime el ca+rácter de la localidad a la que apunta
  printf("Caracter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Codigo ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Direccion de memoria: %p\n\n",ap);

  ap = &d;
  // imprime el carácter de la localidad a la que apunta
  printf("Caracter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Codigo ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Direccion de memoria: %p\n\n",ap);

  ap = &e;
  // imprime el carácter de la localidad a la que apunta
  printf("Caracter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Codigo ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Direccion de memoria: %p\n\n",ap);

 return 0;
}
