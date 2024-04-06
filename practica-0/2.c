/*
 * Implemente la funci ́on char *itoa(int), que dado un entero devuelve su representacion como string.
 * */
#include <stdio.h>
#include <stdlib.h>
char* itoa(int);

int main(){
    printf("%s", itoa(-10));
    return 0;
}

char* itoa(int n){
    char *str;
    int negativo = 0;
    int longitud = 0;
    if(n == 0){
        str = (char *) malloc(sizeof(char)*2);
        if (str == NULL){
            printf("No hay memoria");
            exit(1);
        }
        str[0] = '0';
        str[1] = '\0';
        return str;
    }

    if (n < 0){
        negativo = 1;
        n *= -1;
        longitud = 1;
    }

    int temp_n = n;

    while (temp_n > 0){
        temp_n /= 10;
        longitud++;
    }
    str = (char*) malloc(sizeof(char )*longitud+1);
    for (int i = longitud - 1; i >= 0; i--) {
        str[i] = '0' + (n % 10);
        n /= 10;
    }
    if (negativo) {
        str[0] = '-';
    }
    str[longitud] = '\0';
    return str;

}