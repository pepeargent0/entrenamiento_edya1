/*
 * Implemente una funcion void setzerozero(int []) que ponga en cero el primer elemento del arreglo recibido.
 * Verifique desde la funcion llamante que efectivamente modifica este valor.
¿Por qu ́e pasa esto? ¿No llama a la funci ́on por valor?
 Explique el tipo de la funci ́on malloc, ¿qu ́e valor retorna la funci ́on en caso de que no pueda reservar el
 espacio solicitado?
 NULL
 */
void setzerozero(int []);
#include <stdio.h>
int main(){
    int lista[] ={ 1,2,3,4};
    setzerozero(lista);
    printf("%d", lista[0]);
    return 0;
}
void setzerozero(int A[]){
    A[0] = 0;
}