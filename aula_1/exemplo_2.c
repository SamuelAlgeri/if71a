#include <stdio.h>

int main(){
    int idade;
    long matricula;
    float peso, altura;
    char letra;

    idade = 25;
    matricula = 2359588;
    peso = 73.5;
    altura = 1.80;
    letra = 'S';

    printf("idade: %i \nmatricula: %i \npeso: %.2f \naltura: %.2f \nletra: %c \n", idade, matricula, peso, altura, letra);

    return 0;

}