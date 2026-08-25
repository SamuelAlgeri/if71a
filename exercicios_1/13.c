/*13. Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km, representada como
um inteiro) e o total de combustível gasto (em litros, representado por um valor real). Apresente o valor que representa
o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
Exemplo de Entrada Exemplo de Saída
500 14.286 km/l
35.0
*/
#include <stdio.h>

int distancia;
float combustivel, consumo;

int main(){
    printf(" Digite a distancia percorrida (km): ");
    scanf(" %i", &distancia); 
    printf(" Digite quantos litros de combustivel foram usados: ");
    scanf(" %f", &combustivel);

    consumo = distancia / combustivel;

    printf(" A media foi de: %.3f km/l", consumo);

    return 0;
}