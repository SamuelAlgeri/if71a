/*
7. Modifique o programa do retângulo para que imprima se os dois valores calculados (perímetro e área) são iguais e se
não forem, imprima qual deles é maior.
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
    //printf("log area: %i cm2\n", area); 
    //printf("log perimetro: %i cm\n", perimetro); log usado para validar os calculos

    if(perimetro > area){
        printf("perimetro eh maior\n");
    }else if(perimetro != area){
        printf("area eh maior\n");
    }else{
        printf("Ambos tem o mesmo tamanho\n");
    }
    
    return 0;
}