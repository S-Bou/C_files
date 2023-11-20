#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("¿Cuántos elementos quierres almacenar? ");
    int longitud;
    scanf("%d", &longitud);

    float* valores = (float*) malloc(longitud * sizeof(float));  // Reservamos un espacio de memoria de 4000 floats
    if (valores == NULL){
        printf("No hay suficiente memoria.\n");
        return 1;
    }
    int i;
    for (i=0; i<longitud; i++){
        valores[i] = 5.55E5;
    }

    free(valores);  // Liberamos el espacio de memoria tomado con malloc

    return 0;
}