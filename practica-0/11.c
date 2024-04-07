/*Implemente una funcion setin(int *) que toma un puntero a un entero, y reemplaza el entero apuntado por un 1
 * si el entero apuntado era diferente a 0, y 0 en caso contrario.
 * */
#include <stdio.h>
void setin(int *);
int main(){
    int num = 10;
    setin(&num);
    printf("%d", num);
    return 0;
}
void setin(int *n){
    if(*n !=0){
        *n = 1;
    }else{
        *n = 0;
    }
}