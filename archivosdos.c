#include <stdio.h>

int main(){
    FILE *ficherouno = fopen("estoesunfichero.txt", "r");
    if(!ficherouno){
        printf("ERROR: can't open file 'estoesunfichero.txt'. ");
        return 1;
    }

    char buffer[80];

    if(fgets(buffer, 80, ficherouno)){
        printf("%s", buffer);
    }

    fclose(ficherouno);
    return 0;
}
