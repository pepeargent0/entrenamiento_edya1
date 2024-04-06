/*
 * Escriba un programa que declare algunas variables locales, e imprima las direcciones de memoria de las mismas.
 * Pruebe declarar un arreglo de caracteres, y verifique las direcciones de sus elementos son contiguas.
 */
#include <stdio.h>
int main(){
    int local1=2;
    char local2='3';
    int array[3];
    printf("%d\n",&local1);
    printf("%d\n",&local2);
    for(int i=0; i<3; i++)
        printf("%d\n",&array[i]);
    return 0;
}