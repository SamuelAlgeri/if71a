/*6. Implemente um programa que leia 2 valores inteiros e armazene-os nas variáveis n1 e n2. Calcule a média entre n1 e
n2, atribuindo o seu resultado na variável media. Imprima o valor de media. Qual a saída do seu programa para n1=2
e n2=4? E para n1=2 e n2=3? Modifique o programa para que possa calcular e imprimir a média corretamente.*/
#include <stdio.h>

    int n1, n2;
    float media;

    float n1_certo, n2_certo, media_certa;

int main(){
    // Calculando incorretamente
    printf(" Digite um valor inteiro : ");
    scanf(" %i", &n1); 
    printf(" Digite outro valor inteiro : ");
    scanf(" %i", &n2); 
    media = (n1 + n2) / 2;
    printf("A média é: %f\n", media);

    printf(" Digite um valor inteiro : ");
    scanf(" %i", &n1); 
    printf(" Digite outro valor inteiro : ");
    scanf(" %i", &n2); 
    media = (n1 + n2) / 2;
    printf("A média errada é: %f\n", media);

    // Calculando corretamente

    printf(" Digite um valor inteiro : ");
    scanf(" %f", &n1_certo); 
    printf(" Digite outro valor inteiro : ");
    scanf(" %f", &n2_certo); 
    media_certa = (n1_certo + n2_certo) / 2;
    printf("A média é: %f\n", media);

    printf(" Digite um valor inteiro : ");
    scanf(" %f", &n1_certo); 
    printf(" Digite outro valor inteiro : ");
    scanf(" %f", &n2_certo); 
    media_certa = (n1_certo + n2_certo) / 2;
    printf("A média certa é: %f\n", media_certa);
    return 0;

    // A diferença é por causa das declarações da variável que deve ter pelo menos 1 float para que a divisão seja feita corretamente quando ela dá um resultado não inteiro.
}