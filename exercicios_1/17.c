/*17. Construa um programa que receba como entrada o valor de uma temperatura em graus Celsius (C) e calcule a sua
temperatura correspondente em graus Farenheit (F) (ou seja que faça a conversão Celsius Ñ Farenheit), sabendo que
a conversão Farenheit -> Celsius é dada por: C = ((F-32)*5)/9
*/
#include <stdio.h>

float C, F;

int main(){
    printf(" Digite uma temperatura em celsius: ");
    scanf(" %f", &C);

    F = ((9 * C) / 5) + 32;
    
    printf(" %2.f Celsius são %2.f Fahrenheit", C, F);

    return 0;
}