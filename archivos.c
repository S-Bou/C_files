#include <stdio.h>

int main(){
    FILE *ficherouno = fopen("estoesunfichero.txt", "r");
    if(!ficherouno){
        printf("ERROR: can't open file 'estoesunfichero.txt'. ");
        return 1;
    }

    // Devuelve la posición del cursor
    long position = ftell(ficherouno);
    printf("El cursor está en el: %ld\n", position);

    // fseek() situa el cursor
    fseek(ficherouno, 5, SEEK_SET);

    // Lee el fichero hasta hallar EOF
    do{
        int leido = fgetc(ficherouno);
        if(!feof(ficherouno)){              // Otra opción: if(leido != EOF)
            printf("%c", (char) leido);
        }else{
            printf("== FIN ==\n");
        }
    } while(!feof(ficherouno)); // feof() devuelve 0 si el cursor está en EOF

    position = ftell(ficherouno);
    printf("El cursor está en el: %ld\n", position);

    fclose(ficherouno);
    return 0;
}
