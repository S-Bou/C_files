#include <stdio.h>

// Operators: (NOT ~) (AND &) (OR |) (XOR ^)

#define BASE 00000000

#define VERDE 1<<0
#define AZUL 1<<1
#define ROJO 1<<2
#define MORADO 1<<3
#define NARANJA 1<<4
#define GRIS 1<<5
#define BLANCO 1<<6
#define NEGRO 1<<7

void operacion(int colores){
    if(colores & VERDE)printf("VERDE\n");
    if(colores & AZUL)printf("AZUL\n");
    if(colores & ROJO)printf("ROJO\n");
    if(colores & MORADO)printf("MORADO\n");
    if(colores & NARANJA)printf("NARANJA\n");
    if(colores & GRIS)printf("GRIS\n");
    if(colores & BLANCO)printf("BLANCO\n");
    if(colores & NEGRO)printf("NEGRO\n");
}

int main(){

operacion(NEGRO);

return 0;

}