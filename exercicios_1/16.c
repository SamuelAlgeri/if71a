/*16. Faça um programa que, dado um número inteiro como entrada, retorne seu último dígito.
Exemplo de Entrada Exemplo de Saída
589 9
37 7
1945 5
*/
#include <stdio.h>

int entrada;
int ultimo;

int main(){
    printf(" Digite um numero inteiro: ");
    scanf(" %i", &entrada);

    ultimo = entrada % 10;

    printf(" o ultimo numero desse inteiro é %i", ultimo);

    return 0;
}