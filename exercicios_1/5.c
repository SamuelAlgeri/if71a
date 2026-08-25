/*5. Implemente um programa que leia 2 valores inteiros e armazene-os nas variáveis i1 e i2. Calcule a divisão de i1 por i2
atribuindo o seu resultado na variável divis e o resto da divisão entre i1 e i2, atribuindo o seu resultado na variável
rest. Verifique os resultados para os seguintes valores fornecidos pelo teclado: i1=10 e i2=5 e depois i1=12 e i2=5.
Você consegue explicar a diferença? */

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