/*10. Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (r). A fórmula
para calcular o volume é: (4/3*pi*r^3). Considere (atribua) para a constante PI o valor 3.14159. Dica: cuidado com
o resultado de 4/3 ;)
Exemplos de Entrada Exemplos de Saída
3 VOLUME = 113.097
15 VOLUME = 14137.155
1523 VOLUME = 14797486501.627
*/
#include <stdio.h>

# define pi  3.14159

double raio, volume;


int main(){
    
    printf("Digite o tamanho da raio da esfera (cm): ");
    scanf(" %lf", &raio);
    volume = (4.0/3.0)*pi*raio*raio*raio;
    printf("Essa e o volume da esfera: %.3lf cm^cubicos\n", volume);
    printf("Digite o tamanho da raio da esfera (cm): ");
    scanf(" %lf", &raio);
    volume = (4.0/3.0)*pi*raio*raio*raio;
    printf("Essa e o volume da esfera: %.3lf cm^cubicos\n", volume);
    printf("Digite o tamanho da raio da esfera (cm): ");
    scanf(" %lf", &raio);
    volume = (4.0/3.0)*pi*raio*raio*raio;
    printf("Essa e o volume da esfera: %.3lf cm^cubicos\n", volume);
    return 0;
}