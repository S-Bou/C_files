#include <stdio.h>

void jugar(int* n){    // Recibimos la dirrcción de x
    int y = *n;        // Obtenemos lo que hay en la dirección de x
    y = (y+2) /2 + 2;  // Jugamos con el valor de lo que hay en la dirección de x
    *n = y;            // Guardamos el resultado en la dirección de x
}

int main(){
    int x = 10;
    jugar(&x);         // Enviamos a la función la dirección de x
    printf("%d\n", x); // Mostramos lo que vale x
    return 0;
}
