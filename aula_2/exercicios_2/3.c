/*
3. a) Faça um programa que dados os coeficientes (a,b e c) de uma equação do 2o grau, calcule e imprima suas raízes
(caso a equação possua raízes imaginárias, o programa não deve imprimir nada).
b) Refaça o exercício anterior para calcular e imprimir as raízes reais e em caso de não serem reais, imprimir mensagem
raízes imaginárias (não precisa calcular neste caso, apenas imprimir a mensagem).
x = (-b +-sqr((b^2 - 4ac)))/2a
x² + 2x -15 = 0 = 3 e -5
*/

#include <stdio.h>
#include <math.h>

int a, b, c, delta;
float raiz1, raiz2;

int main(){

    printf("Digite o termo a: ");
    scanf("%d", &a);
    printf("Digite o termo b: ");
    scanf("%d", &b);
    printf("Digite o termo c: ");
    scanf("%d", &c);

    delta = (b*b) - (4 * a * c);
    //printf("log delta: %i\n\n", delta);

    if(delta >= 0){ // se delta maior que 0 as raízes são reais
        raiz1 = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);
        printf("raiz1: %.2f\n", raiz1);
        printf("raiz2: %.2f\n", raiz2);
    }else{ // se delta menor que 0 as raízes não são reais
        printf("raizes imaginarias\n\n");
    }

    return 0;
}