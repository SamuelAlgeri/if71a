/*14. Faça um programa que leia um número inteiro e informe com quais cédulas podemos representá-lo. Suponha que
estejam disponíveis apenas notas de R$ 50, R$5 e R$1. Exemplo de resposta: R$ 218 = 4 cédulas de 50, 3 cédulas de
5 e 3 cédulas de 1.
*/
#include <stdio.h>

int n1, resto5;
int nota50, nota5, nota1;

int main(){
    printf(" Digite um numero inteiro: ");
    scanf(" %i", &n1);

    nota50 = n1/50;
    resto5 = n1%50;
    nota5 = resto5/5;
    nota1 = resto5%5;
    
    printf(" R$ %i = %i cedulas de 50, %i cedulas de 5 e %i cedulas de 1", n1, nota50, nota5, nota1);

    return 0;
}