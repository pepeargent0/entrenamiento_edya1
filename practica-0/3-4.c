/*Definir una estructura carta para representar una carta de la baraja espanola
 * (represente el palo con una enumeracion). Cree un arreglo de 48 cartas, lĺamelo mazo y
 * llenelo con las cartas correspondientes.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Palo{
    ORO=0,
    BASTO=1,
    ESPADA=2,
    COPA=3
};

typedef struct {
    int numero;
    enum Palo palo;
}Carta;

Carta azar(Carta *, int);
int main(){
    Carta *mazo = (Carta*) malloc(sizeof (Carta)*48);
    if (mazo == NULL){
        printf("Sin memoria");
        exit(1);
    }
    for(int i=0;i<12;i++){
        mazo[i].numero = i+1;
        mazo[i].palo = ORO;
        mazo[i+12].numero = i+1;
        mazo[i+12].palo = BASTO;
        mazo[i+(12*2)].numero = i+1;
        mazo[i+(12*2)].palo = ESPADA;
        mazo[i+(12*3)].numero = i+1;
        mazo[i+(12*3)].palo = COPA;
    }
    Carta carta_azar = azar(mazo, 48);
    printf("Numero:%d Palo: %d", carta_azar.numero, carta_azar.palo);
    free(mazo);
    return 0;
}

Carta azar(Carta *mazo, int longitud){
    srand(time(NULL));
    int num_carta = rand() % longitud;
    printf("%d\n", num_carta);
    return mazo[num_carta];
}