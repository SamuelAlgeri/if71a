#include <stdio.h>

int main(){

    int i;
    float f;
    char c;
    printf(" Digite um valor inteiro : ");
    scanf("%i", &i); // complete o comando para ler a variável i
    printf(" Digite um caractere : ");
    scanf(" %c", &c); // complete o comando para ler a variável c
    printf(" Entre com um numero de ponto flutuante ( valor nao inteiro ): ");
    scanf("%f", &f);  // complete o comando para ler a variável f
    printf("Inteiro: %i\nFloat: %f\nCaracter: %c\n", i, f, c); // imprimeir as variável
    return 0;
}