/*
2. a) Faça um programa que tendo como entradas (via teclado) a base e altura de um retângulo, calcule o perímetro
(2*base + 2*altura) e a área (base*altura) e imprima se o perímetro é maior que a área.
b) Modifique o programa anterior para que imprima qual dos dois é maior (perímetro ou área). Assuma que o usuário
fornece valores tais que nunca perímetro e área serão iguais.
*/

#include <stdio.h>

int base, altura, perimetro, area;

int main(){

    printf("Digite a base de um retangulo (cm): ");
    scanf("%d", &base);
    printf("Digite a altura de um retangulo (cm): ");
    scanf("%d", &altura);

    perimetro = (2 * base) + (2 * altura);
    area = base * altura;
    // printf("log area: %i cm2\n", area);
    // printf("log perimetro: %i cm\n", perimetro);

    if(perimetro > area){
        printf("perimetro eh maior que a area\n");
    }

    if(perimetro > area){
        printf("perimetro eh maior que a area\n");
    }else{
        printf("area eh maior que o perimetro\n");
    }
    
    return 0;
}