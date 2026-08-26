#include <stdio.h>

int n1, n2;

int main(){
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);

    if(n1==n2){
        printf("Os valores são iguais");
    }else{
        printf("Os valores são diferentes");
    }
}