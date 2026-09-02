/*
4. Leia um valor inteiro n, que representa o número de casos de teste que vem a seguir. 
Cada caso de teste consiste de 3 valores reais. Faça um programa que leia os 3 valores 
de cada caso de teste e apresente a média ponderada para cada caso, sendo que o primeiro 
valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. No exemplo a
seguir temos n=4, ou seja, 4 casos de teste, cada um deles com 3 variáveis fornecidas 
como entrada e a média ponderada apresentada como saída:
Exemplo de Entrada Exemplo da Saída correspondente
4
1.0 2.0 3.0     2.3
6.5 4.3 6.2     5.7
5.1 4.2 8.1     6.3
8.0 9.0 10.0    9.3
*/

#include <stdio.h>

int n, i;
float n1, n2, n3, media;

int main(){

    printf("Digite a quantidade de testes que faremos: ");
    scanf("%d", &n);
  
    for(i = 1; i <= n; i++){
        printf("Digite a nota 1: ");
        scanf("%f", &n1);
        printf("Digite a nota 2: ");
        scanf("%f", &n2);
        printf("Digite a nota 3: ");
        scanf("%f", &n3);
        media = ((n1 * 2)+(n2 * 3)+(n3 * 5))/10.0;
        printf("A media ponderada para as notas %.1f, %.1f e %.1f eh: %.1f\n", n1, n2, n3, media);
    }
    return 0;
}