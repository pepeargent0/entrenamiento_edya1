/*
 * Implemente una estructura contacto que tenga como campos: una cadena para el nombre de una persona, una cadena
 * para el nu ́mero de tel ́efono, y un entero sin signo para llevar la edad de la persona
 Implemente una funcion struct contacto crearcontacto(void) que pida por teclado los
 datos pertinentes, rellene una estructura contacto y la devuelva

 Implemente una funci ́on void actualizaredad(struct contacto *) que dado un puntero a una estructura contacto,
 pida una nueva edad por teclado y actualice la estructura.
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char *nombre;
    char *telefono;
    unsigned edad;
} contacto;
contacto crearcontacto(void);
void actualizaredad(contacto*);
int main(){
    contacto contacto1 = crearcontacto();
    printf("%s\n", contacto1.nombre);
    printf("%s\n", contacto1.telefono);
    printf("%d\n", contacto1.edad);
    actualizaredad(&contacto1);
    printf("%d\n", contacto1.edad);
    free(contacto1.nombre);
    free(contacto1.telefono);
    return 0;
}
contacto crearcontacto(void){
    contacto contacto_tmp;
    contacto_tmp.nombre = (char*) malloc(sizeof (char )*100);
    contacto_tmp.telefono = (char*) malloc(sizeof (char )*20);
    printf("ingrese nombre\n");
    scanf("%s", contacto_tmp.nombre);
    printf("ingrese telefono\n");
    scanf("%s", contacto_tmp.telefono);
    printf("ingrese edad\n");
    scanf("%d", &contacto_tmp.edad);
    return contacto_tmp;
}

void actualizaredad(contacto *c){
    printf("ingrese edad\n");
    scanf("%d", &c->edad);

}