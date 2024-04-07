/*
 * Implemente una funci ́on void applyin(int (*)(int), int *) que toma un puntero a funci ́on, un puntero a un entero,
 * y reemplaza el entero apuntado por el valor de ejecutar la funci ́on apuntada sobre el valor apuntado.
 */
#include <stdio.h>
void applyin(int (*)(int), int *);
int sumas_n(int);
int main(){
    int n = 5;
    applyin(sumas_n, &n);
    printf("%d", n);
    return 0;
}
int sumas_n(int a){
    int b = a+a+2;
    return b;
}
void applyin(int (*func)(int), int *n){
    *n = func(*n);
}
