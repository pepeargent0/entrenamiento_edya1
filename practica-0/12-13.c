/*
 * Implemente una funcion void swap(int *, int *) que dados dos punteros a variables,
 * intercambie el contenido de las variables apuntadas
 */
#include <stdio.h>
void swap(int *, int *);
void swap_xor(int *, int *);
int main(){
    int a=1;
    int b=2;
    swap(&a,&b);
    printf("%d %d", a,b);
    swap_xor(&a,&b);
    printf("%d %d", a,b);
    return 0;
}
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void swap_xor(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}