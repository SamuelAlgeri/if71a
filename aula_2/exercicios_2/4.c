/*
4. Faça um programa que leia do teclado um ano e imprima na tela se ele é ou não bissexto. Obs.: um ano será bissexto
se: (a) for divisível por 400 OU (b) se for divisível por 4 e não o for por 100. Você deve fazer este exercício usando
apenas apenas uma estrutura if-else. Dica: explore o uso dos operadores lógicos!
*/

#include <stdio.h>
#include <math.h>

int ano;
float div400, div4, div100;

int main(){

    printf("Digite um ano: ");
    scanf("%d", &ano);

    div400 = ano % 400;
    div4 = ano % 4;
    div100 = ano % 100;

    if(div400 == 0 || div4 == 0 && div100 != 0){
        printf("o ano %i eh bissexto", ano);
    }else{
        printf("o ano %i nao eh bissexto", ano);
    }

    return 0;
}