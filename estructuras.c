#include <stdio.h>
#include <string.h>
struct cuenta{
    char nombre[30];
    char apellido[40];
    int identificador;
    int saldo;
};

void imprimir_datos(struct cuenta *c){    // Recibimos la dirección de memoria del struct para evitar copiar los datos 
    printf("El cliente %s %s tiene %d euros en cuenta.\n",
    // c.nombre, c.apellido, c.saldo);
    c->nombre, c->apellido, c->saldo);    // Usamos flecha en lugar de punto para desreferenciar el puntero y ver el valor del campo
}

int main(){
    struct cuenta c1;
    strcpy(c1.nombre, "Pepito");
    strcpy(c1.apellido, "Pérez");
    c1.identificador = 1235;
    c1.saldo = 400;

    imprimir_datos(&c1);                // Enviamos la dirección de memoria de la struct para evitar que el compilador copie todos los datos en la función 

    return 0;
}