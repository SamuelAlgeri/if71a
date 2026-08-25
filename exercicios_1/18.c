/* Construa um programa que calcule o gasto de uma viagem de carro de uma cidade a outra, sabendo:
    • O carro utilizado roda 15 Km com 1 litro de gasolina.
    • O preço da gasolina é de R$5,60.
    • O valor de cada pedágio é de R$8,00.
Seu programa deve receber a distância e a quantidade de pedágios entre as cidades.
Exemplo de Entrada Exemplo de Saída
Execução 1 400 9 221.33
Execução 2 100 3 61.33

*/
#include <stdio.h>

# define preço_gasolina 5.6
# define valor_pedagios  8.0
# define consumo 15.0
int distancia, qtd_pedagios;
float custo_total;

int main(){
    printf(" Digite a distancia da viagem (km): ");
    scanf(" %i", &distancia);
    printf(" Digite a quantidade de pedagios: ");
    scanf(" %i", &qtd_pedagios);
    
    custo_total = ((distancia / consumo)*preço_gasolina) + (qtd_pedagios * valor_pedagios);
    
    printf(" o custo total da viagem eh de R$ %.2f", custo_total);

    return 0;
}