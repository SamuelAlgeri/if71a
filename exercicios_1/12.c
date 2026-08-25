/*12. Modifique o programa anterior para imprimir também o menor (NÃO use o condicional if - veja se consegue abstrair
como deve ser a fórmula do menor a partir do entendimento de como funciona a fórmula do maior).
*/
#include <stdio.h>
#include <stdlib.h>

int maxAB, a, b, c, maxABC, minABC, minAB;

int main(){
    printf(" Digite um valor inteiro a: ");
    scanf(" %i", &a); 
    printf(" Digite outro valor inteiro b: ");
    scanf(" %i", &b);
    printf(" Digite um valor inteiro c: ");
    scanf(" %i", &c); 

    maxAB = (a + b + abs(a - b))/2;
    maxABC = (maxAB + c + abs(maxAB - c))/2; 
    minAB = (a + b - abs(a - b))/2;
    minABC = (minAB + c - abs(minAB - c))/2;

    printf(" eh o maior: %i", maxABC);
    printf("\n eh o menor: %i", minABC);

    return 0;
}