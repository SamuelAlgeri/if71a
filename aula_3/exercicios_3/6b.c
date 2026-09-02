/*
6. a) laço determinado: Escreva um programa que peça ao usuário para fornecer t e 
depois leia um total t de números digitados pelo usuário, calcule e imprima na tela 
o maior valor entre todos os t valores digitados.
b) laço indeterminado: Modifique o programa aterior para que leia números digitados 
pelo usuário até que este digite um valor negativo (quanto então o programa finaliza 
a repetição), calcule e imprima na tela o maior valor entre todos os digitados.
*/

#include <stdio.h>

int t, i, maior, atual;

int main(){
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        printf("Digite outro valor inteiro: ");
        scanf("%d", &atual);
        if(atual >= maior){
            maior = atual;
        }
    }
    printf("O maior numero digitado foi: %i \n", maior);
    return 0;
}