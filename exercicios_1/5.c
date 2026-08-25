#include <stdio.h>

    int i1, i2, rest;
    float divis;

int main(){
    printf(" Digite um valor inteiro : ");
    scanf(" %i", &i1); 
    printf(" Digite outro valor inteiro : ");
    scanf(" %i", &i2); 
    divis = i1 / i2;
    rest = i1 % i2;
    printf("\nResultado da divisao: %f", divis);
    printf("\nResto da divisao: %i", rest);
        // Quando se usa variáveis inteiras o resultado só pode ser inteiro então não vou receber como resultado 2.5 apenas 2.
        // só aparece 2.00000 pq eu disse que meu divis é float mas como nenhum dos valores que estão sendo usados para calcular são float então o resultado é sempre inteiro
    return 0;
}