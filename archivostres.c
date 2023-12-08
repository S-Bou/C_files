#include <stdio.h>

int main(){
    FILE *write = fopen("ficherodos.txt", "w");
    if(!write){
        printf("ERROR: can't open file 'estoesunfichero.txt'. ");
        return 1;
    }


    //fputs("Frase de prueba escrita en fichero.", write);
    int data = fputc('H', write);
    if(data == EOF){
        printf("ERROR: resultado inesperado.");
    }else{
        printf("Se ha añadido el valor %c al fichero.", data);
    }

    fclose(write);
    return 0;
}
