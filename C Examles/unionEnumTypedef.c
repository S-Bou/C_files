#include <stdio.h>

union mi_union_t {
    int entero;        // Todas las variables en una union coparten la isma dirección de memoria
    float flotante;
};

enum diasemana {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

typedef enum diasemana DiaS;   // Cambia el nombre del tipo

int main(){
    // UNION ------------------------------------------------------------------------------------
    union mi_union_t u;
    u.entero = 123456789;
    u.flotante = 2.54E6;      // Este valor se almacena en la misma dirección que entero
    printf("entero = %d\n", u.entero);

    // ENUM -------------------------------------------------------------------------------------
    enum diasemana dia;
    dia = VIERNES;
    printf("Dia: %d\n", dia);

    // TYPEDEF ----------------------------------------------------------------------------------
    DiaS dias;                    // Aquí se usa 'DiaS' como 'enum diasemana'
    dias = VIERNES;
    printf("Dias: %d\n", dias);

    return 0;
}