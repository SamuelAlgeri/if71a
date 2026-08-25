/*11. Faça um programa que leia três valores inteiros e apresente o máximo dos três valores lidos seguido da mensagem “eh
o maior”. Utilize a fórmula abaixo que calcula o máximo entre dois valores:
maxAB = (a + b + abs(a-b))/2
Obs. abs() calcula o módulo, ou seja o valor absoluto, do argumento entre parênteses e é uma função da biblioteca
stdlib.h! Para utilizá-la lembre-se de incluir stdlib.h de forma similar stdio.h
*/
#include <stdio.h>
#include <stdlib.h>

int maxAB, a, b, c, maxABC;

int main(){
    printf(" Digite um valor inteiro a: ");
    scanf(" %i", &a); 
    printf(" Digite outro valor inteiro b: ");
    scanf(" %i", &b);
    printf(" Digite um valor inteiro c: ");
    scanf(" %i", &c); 

    maxAB = (a + b + abs(a - b))/2;
    maxABC = (maxAB + c + abs(maxAB - c))/2;

    printf(" eh o maior: %i", maxABC);

    return 0;
}