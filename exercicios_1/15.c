/*15. Faça um algoritmo que dado um número de segundos, converta para dias, horas, minutos e segundos. Por exemplo,
7322 segundos correspondem a 0 dias, 2 horas, 2 minutos e 2 segundos.
*/
#include <stdio.h>

int entrada, segundos, minutos, horas, dias;
int resto, resto2;

int main(){
    printf(" Digite uma quantidade enorme de segundos: ");
    scanf(" %i", &entrada);

    dias = entrada / 86400;
    resto = entrada % 86400;
    horas = resto / 3600;
    resto2 = resto % 3600;
    minutos = resto2 / 60;
    segundos = resto2 % 60;
    
    printf(" %i segundos correspondem a %i dias, %i horas, %i minutos e %i segundos", entrada, dias, horas, minutos, segundos);

    return 0;
}