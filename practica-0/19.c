/*
 * Implemente una funcion int apply(int (*)(int), int) que toma un puntero a funcíon,
 * y un entero, y aplica la funcion al entero y retorna el valor dado
 */
#include <stdio.h>
int apply(int (*)(int), int);
int suma(int);
int main(){
    int n = 2;
    int p = apply(suma, n);
    printf("%d", p);
    return 0;
}
int suma(int a){
    return a+1;
}
int apply(int (*func)(int), int num){
    return func(num);
}