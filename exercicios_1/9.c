// 9. Faça um programa que calcule o perímetro (2base + 2altura) de um retângulo.
#include <stdio.h>

float base, altura, perimetro;

int main(){
    
    printf("Digite o tamanho da base (cm): ");
    scanf(" %f", &base);
    printf("Digite o tamanho da altura (cm): ");
    scanf(" %f", &altura);
    perimetro = (2*base) + (2*altura);
    printf("Essa e o perimetro do retangulo: %2.fcm\n", perimetro);
    return 0;
}