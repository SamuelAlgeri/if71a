/*
1. Leia um valor inteiro n e mostre na tela a sua tabuada (n x 1 n x 2 ... até n x 10)
*/

#include <stdio.h>

int n, resultado; 
int i = 1;

int main(){

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\nA tabuada do %i é: \n", n);
    do{
        resultado = i * n;
        printf("%i x %i = %i\n", n, i, resultado);
        i++;
    }while(i <= 10);
    
    return 0;
}