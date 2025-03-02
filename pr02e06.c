/*
  Inversión de una cadena Usando Apuntadores
*/

#include <stdio.h>
#include <string.h>

void invertirCadena(char *cadena) {
    char *inicio = cadena;
    char *fin = inicio + strlen(cadena) - 1;
    char temp;
    
    while (inicio < fin) {
        temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main() {
    char cadena[] = "Hola Mundo";
    printf("\nCadena original: %s\n", cadena);
    invertirCadena(cadena);
    printf("\nCadena invertida: %s\n\n", cadena);
    return 0;
}
